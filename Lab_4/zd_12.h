#include <iostream>


int zd_12() {
    double x = 4;
    int z = 0;
    __asm__ ("fldl %1 \n\t"
             "fldl %2 \n\t"
             "fcomi \n\t"
             "setne %%al \n\t"
             "movzbl %%al, %0"
            : "=r" (z)
            : "m" (x), "f" ((double)3.0)
            : "eax");

    std::cout << "Z = " << z << std::endl;
    return 0;
}