#include <iostream>
//в задании ошибка vcmpsd не принимает тип cmp_value непонятно почему,ведь выделено 64 бита и всё работать должно 
int zd_11()
{
    double x = 4.0;
    int z;
    double cmp_value = 5.0; // явное указание типа double
    asm ("vcmpsd $0, %1, %[cmp_value], %%xmm0\n\t"//сравнение
         "setne %%al\n\t"//выдача флага 0 1 
         "movzx %%al, %0"
            : "=r" (z)
            : "x" (x), [cmp_value] "m" (cmp_value)
            : "%xmm0", "%al");

    std::cout << "z = " << z << std::endl;

    return 0;
}