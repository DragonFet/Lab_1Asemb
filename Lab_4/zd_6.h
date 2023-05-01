#include <iostream>
#include <iomanip>
#include <cstring>
#include "typeinfo"

unsigned int min(uint16_t x, uint16_t y, uint16_t& z, uint16_t& w)
{
    asm (
            "movw %[X], %%ax\n\t"   // загрузка значения x в регистр ax
            "movw %[Y], %%bx\n\t"   // загрузка значения y в регистр bx
            "subw $7, %%bx\n\t"     // вычитание 7 из y
            "xorw %%dx, %%dx\n\t"   // обнуление dx
            "divw %%bx\n\t"         // деление x на (y-7), результат в ax, остаток в dx
            "movw %%ax, %[Z]\n\t"   // сохранение результата в z
            "movw %[X], %%ax\n\t"   // загрузка значения x в ax
            "movw %[Y], %%bx\n\t"   // загрузка значения y в bx
            "subw $7, %%bx\n\t"     // вычитание 7 из y
            "xorw %%dx, %%dx\n\t"   // обнуление dx
            "divw %%bx\n\t"         // деление x на (y-7), остаток в dx
            "movw %%dx, %[W]\n\t"   // сохранение остатка в w
            : [Z] "=r" (z), [W] "=r" (w)
    : [X] "m" (x), [Y] "m" (y)
    : "%ax", "%bx", "%dx"
    );

    return z;
}

unsigned int mincheck(uint16_t x, uint16_t y, uint16_t& z, uint16_t& w)
{
    z = x / (y - 7);
    w = x % (y - 7);
    uint16_t z_check = x / (y - 7);
    uint16_t w_check = x % (y - 7);
    std::cout<<z_check<<" "<<w_check<<std::endl;
    return 0;
}





int main() {
    uint16_t x = 100, y = 20, z, w;
    uint16_t result = min(x, y, z, w);
    std::cout << "Result: " << result << ", w: " << w << std::endl;
    uint16_t result2 = mincheck(x, y, z, w);
    std::cout << "Result: " << result2 << ", w: " << w << std::endl;
    std::cout << typeid(result).name() << " " << typeid(result2).name();

    return 0;


}
