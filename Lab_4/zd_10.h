#include <iostream>
#include <immintrin.h>

int zd_10() {
    double x = 3;
    double y = 3.0;
    int z;
    asm(
            "vucomisd %1, %2 \n\t" // Сравниваем x с y
            "setne %b0 \n\t" // Устанавливаем z в 1, если результат не равен или неупорядочен
            : "=r" (z)
            : "x" (x), "x" (y)
            : "cc"
            );

    std::cout << z << std::endl;
    return 0;
}
//PS не получилось реализовать через один оператор x, поэтому будем считать что y это константа с которой мы сравниваем,и если y равен x возвращаем 0
