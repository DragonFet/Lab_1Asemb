#include <iostream>

int zd_6() {
    int m = 155;
    int n = -299;
    float a = 0.0f;
    float b = 1.0f;
    float c = 12345678.0f;
    float d = 123456789.0f;

    // ������������� ��������� � ���������
    int i = 0;
    std::cout << "i = " << i << std::endl;
    i++; // ���������
    std::cout << "i = " << i << std::endl;
    i--; // ���������
    std::cout << "i = " << i << std::endl;

    // ��������� � ��������� m � n
    std::cout << "m = " << m << std::endl;
    m++; // ���������
    std::cout << "m = " << m << std::endl;
    n--; // ���������
    std::cout << "n = " << n << std::endl;

    // ��������� � ��������� a, b, c � d
    std::cout << "a = " << a << std::endl;
    a++; // ���������
    std::cout << "a = " << a << std::endl;
    b--; // ���������
    std::cout << "b = " << b << std::endl;
    c++; // ���������
    std::cout << "c = " << c << std::endl;
    d--; // ���������
    std::cout << "d = " << d << std::endl;

    // ������������ �� ������ ���������
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