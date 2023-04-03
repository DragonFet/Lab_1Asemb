#include <iostream>

int zd_6() {
    int m = 155;
    int n = -299;
    float a = 0.0f;
    float b = 1.0f;
    float c = 12345678.0f;
    float d = 123456789.0f;

    // целочисленный инкремент и декремент
    int i = 0;
    std::cout << "i = " << i << std::endl;
    i++; // инкремент
    std::cout << "i = " << i << std::endl;
    i--; // декремент
    std::cout << "i = " << i << std::endl;

    // инкремент и декремент m и n
    std::cout << "m = " << m << std::endl;
    m++; // инкремент
    std::cout << "m = " << m << std::endl;
    n--; // декремент
    std::cout << "n = " << n << std::endl;

    // инкремент и декремент a, b, c и d
    std::cout << "a = " << a << std::endl;
    a++; // инкремент
    std::cout << "a = " << a << std::endl;
    b--; // декремент
    std::cout << "b = " << b << std::endl;
    c++; // инкремент
    std::cout << "c = " << c << std::endl;
    d--; // декремент
    std::cout << "d = " << d << std::endl;

    // тестирование на особых значениях
    unsigned int max_unsigned_int = 4294967295;
    int max_signed_int = 2147483647;
    int min_signed_int = -2147483648;

    std::cout << "max_unsigned_int = " << max_unsigned_int << std::endl;
    max_unsigned_int++;
    std::cout << "max_unsigned_int = " << max_unsigned_int << std::endl;

    std::cout << "max_signed_int = " << max_signed_int << std::endl;
    max_signed_int++;
    std::cout << "max_signed_int = " << max_signed_int << std::endl;

    std::cout << "min_signed_int = " << min_signed_int << std::endl;
    min_signed_int--;
    std::cout << "min_signed_int = " << min_signed_int << std::endl;

    return 0;
}