#include <iostream>
#include <iomanip>
#include <cstring>
void next_task()
{
    for (int i = 0; i <50 ; ++i) {
        std::cout<<std::endl;
    }
}
void write_to_array(uint32_t* M, size_t N, size_t k, uint32_t x) {
    uint64_t base = reinterpret_cast<uint64_t>(&M[0]); // базовый адрес массива
    uint64_t address_k = base + k * sizeof(uint32_t); // адрес ячейки M[k]

    uint16_t index = static_cast<uint16_t>(address_k & 0xFFFF); // младшая часть адреса
    uint8_t scale = 2; // масштабный множитель (2 байта)
    uint32_t* ptr = reinterpret_cast<uint32_t*>((address_k >> 16) + (index * scale)); // указатель на ячейку M[k]

    *ptr = x; // запись x в ячейку M[k]
}
void second()
{
    const int N = 10;
    size_t k = 3;
    uint32_t M[N] = {0x44332211};
    for (int i = 0; i < N; i++) {
        if (i != k) {
            unsigned char* ptr = reinterpret_cast<unsigned char*>(&M[i]);
            *(ptr + 3) = 0xFF;
        }
    }
    std::cout << "M after: ";
    for (int i = 0; i < N; i++) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << M[i] << " ";
    }
    std::cout << std::endl;
}
void first() {
    const int N = 10;
    uint32_t M[N];
    for (int i = 0; i < N; ++i) {
        M[i] = 0x44332211;
    }

    std::cout << "M before: ";
    for (int i = 0; i < N; i++) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << M[i] << " ";
    }
    std::cout << std::endl;

    size_t k = 3;
    uint32_t x = 0xAABBCCDD;
    write_to_array(M, N, k, x);

    std::cout << "M after: ";
    for (int i = 0; i < N; i++) {
        std::cout << std::hex << std::setw(8) << std::setfill('0') << M[i] << " ";
    }
    std::cout << std::endl;

}
unsigned int min(unsigned int x, unsigned int y, unsigned int& z, unsigned int& w)
{
    asm (
            "movl %[X], %%eax\n\t"   // загрузка значения x в регистр eax
            "movl %[Y], %%ebx\n\t"   // загрузка значения y в регистр ebx
            "subl $7, %%ebx\n\t"     // вычитание 7 из y
            "movl $0, %%edx\n\t"     // обнуление edx
            "divl %%ebx\n\t"         // деление x на (y-7), результат в eax
            "movl %%eax, %[Z]\n\t"   // сохранение результата в z
            "movl %[X], %%eax\n\t"   // загрузка значения x в eax
            "movl %[Y], %%ebx\n\t"   // загрузка значения y в ebx
            "subl $7, %%ebx\n\t"     // вычитание 7 из y
            "xor %%edx, %%edx\n\t"   // обнуление edx
            "divl %%ebx\n\t"         // деление x на (y-7), остаток в edx
            "movl %%edx, %[W]\n\t"   // сохранение остатка в w
            : [Z] "=r" (z), [W] "=r" (w)
    : [X] "m" (x), [Y] "m" (y)
    : "%eax", "%ebx", "%edx"
    );

    return z;
}
unsigned int mincheck(unsigned int x, unsigned int y, unsigned int& z, unsigned int& w)
{
    z = x / (y - 7);
    w = x % (y - 7);
    unsigned int z_check = x / (y - 7);
    unsigned int w_check = x % (y - 7);
    std::cout<<z_check<<" "<<w_check<<std::endl;
    return 0;
}
void calculate4(unsigned int x, unsigned int y, unsigned int& z, unsigned int& w)
{
    // Копируем x и y в регистры общего назначения
    uint32_t x_reg, y_reg;
    memcpy(&x_reg, &x, sizeof(x));
    memcpy(&y_reg, &y, sizeof(y));


    asm(
            "movl %1, %%eax\n" // Кладем x_reg в регистр eax
            "movl %2, %%ebx\n" // Кладем y_reg в регистр ebx
            "subl $7, %%ebx\n" // Вычитаем 7 из y_reg
            "divl %%ebx\n"     // Делим x_reg на y_reg
            "movl %%eax, %0\n" // Сохраняем частное в z
            "movl %%edx, %3\n" // Сохраняем остаток в w
            : "=r"(z), "=r"(w) // Выходные операнды
            : "r"(x_reg), "0"(0), "r"(y_reg) // Входные операнды
            : "%eax", "%ebx", "%edx" // Изменяемые регистры
            );
    std::cout << "Result: " << z<< ", w: " << w << std::endl;
}
void calculate(unsigned int* pX, unsigned int* pY, unsigned int& z) {
    asm (
            "mov (%0), %%eax\n\t"   // загрузка значения x из памяти по адресу pX в регистр eax
            "mov (%1), %%ebx\n\t"   // загрузка значения y из памяти по адресу pY в регистр ebx
            "shl $1, %%ebx\n\t"     // умножение y на 2
            "add %%ebx, %%eax\n\t"  // сложение x и 2*y
            "mov %%eax, %2\n\t"     // сохранение результата в z
            :
            : "r" (pX), "r" (pY), "r" (z)
            : "%eax", "%ebx"
            );
    std::cout<<z<<std::endl;
}




int main() {


    next_task();
    second();
    next_task();
    unsigned int x = 100, y = 20, z, w;
    unsigned int result = min(x, y, z, w);
    std::cout << "Result: " << result << ", w: " << w << std::endl;
    unsigned int result2 = mincheck(x, y, z, w);
    std::cout << "Result: " << result2 << ", w: " << w << std::endl;
    next_task();
    calculate4(x,y,z,w);
    next_task();
    calculate(&x,&y,z);
    return 0;
}
