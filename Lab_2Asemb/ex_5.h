#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;
//Вариант из таблицы 1,входные данные:x = 0x99887766, y = 5, z = −5





void printDump(void* p, size_t N) {
    unsigned char* ptr = (unsigned char*) p;
    for (size_t i = 0; i < N; i++) {
        printf("%02X ", *(ptr + i));
    }
    printf("\n");
}









int ex_5()
{
    int x = 0x99887766;
    std::cout << "x = ";
    printDump(&x, sizeof(x));//порядок следования байтов для нашего процессора - прямой (Little-Endian)


    int arr[] = { x, 5, -5 };
    double y = 5;
    std::cout << "arr = ";
    printDump(&arr, sizeof(arr));// целые числа хранятся в порядке Little-Endian
    std::cout << "y = ";
    printDump(&y, sizeof(y));//числа с плавающей запятой хранятся в соответствии со стандартом IEEE 754, где первые 4 байта представляют экспоненту и последние 4 байта представляют мантиссу
    //в памяти 40 14 00 00 00 00 00 00

}
