#include <iostream>
//� ������� ������ vcmpsd �� ��������� ��� cmp_value ��������� ������,���� �������� 64 ���� � �� �������� ������ 
int zd_11()
{
    double x = 4.0;
    int z;
    double cmp_value = 5.0; // ����� �������� ���� double
    asm ("vcmpsd $0, %1, %[cmp_value], %%xmm0\n\t"//���������
         "setne %%al\n\t"//������ ����� 0 1 
         "movzx %%al, %0"
            : "=r" (z)
            : "x" (x), [cmp_value] "m" (cmp_value)
            : "%xmm0", "%al");

    std::cout << "z = " << z << std::endl;

    return 0;
}