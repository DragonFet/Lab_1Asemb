#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int zd3() {
    setlocale(LC_ALL, "Russian");
    cout<<"char"<<sizeof(char)<<"byte"<<endl;
    cout<<"signed char"<<sizeof(signed char)<<"byte"<<endl;
    cout<<"unsigned char"<<sizeof(unsigned char)<<"byte"<<endl;
    cout<<"wchar_t"<<sizeof(wchar_t)<<"byte"<<endl;
    cout<<"short"<<sizeof(short)<<"byte"<<endl;
    cout<<"unsigned short"<<sizeof(unsigned short)<<"byte"<<endl;
    cout<<"int"<<sizeof(int)<<"byte"<<endl;
    cout<<"unsigned int"<<sizeof(unsigned int)<<"byte"<<endl;
    cout<<"long"<<sizeof(long)<<"byte"<<endl;
    cout<<"unsigned long"<<sizeof(unsigned long)<<"byte"<<endl;
    cout<<"long long"<<sizeof(long long)<<"byte"<<endl;
    cout<<"unsigned long long"<<sizeof(unsigned long long)<<"byte"<<endl;
    cout<<"float"<<sizeof(float)<<"byte"<<endl;
    cout<<"double"<<sizeof(double)<<"byte"<<endl;
    cout<<"long double"<<sizeof(long double)<<"byte"<<endl;
    cout<<"size_t"<<sizeof(size_t)<<"byte"<<endl;
    cout<<"ptrdiff_t"<<sizeof(ptrdiff_t)<<"byte"<<endl;
    cout<<"void*"<<sizeof(void*)<<"byte"<<endl;
    cout<<"char*"<<sizeof(char*)<<"byte"<<endl;
    cout<<"int*"<<sizeof(int*)<<"byte"<<endl;
    cout<<"unsigned int*"<<sizeof(unsigned int*)<<"byte"<<endl;
    cout<<"char: 8 bits (1 byte)\n"
            "signed char: 8 bits (1 byte)\n"
            "unsigned char: 8 bits (1 byte)\n"
            "wchar_t: 16 bits (2 bytes)\n"
            "short: 16 bits (2 bytes)\n"
            "unsigned short: 16 bits (2 bytes)\n"
            "int: 32 bits (4 bytes)\n"
            "unsigned int: 32 bits (4 bytes)\n"
            "long: 32 bits (4 bytes)\n"
            "unsigned long: 32 bits (4 bytes)\n"
            "long long: 64 bits (8 bytes)\n"
            "unsigned long long: 64 bits (8 bytes)\n"
            "float: 32 bits (4 bytes)\n"
            "double: 64 bits (8 bytes)\n"
            "long double: 80 bits (10 bytes)\n"
            "size_t: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "ptrdiff_t: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "void*: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "char*: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "int*: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "unsigned int*: 32 bits (4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform)\n"
            "Of these data types, only the short and unsigned short types have 16 bits, 32 bits have int, unsigned int, long, unsigned long, size_t, ptrdiff_t, void*, char*, int*, unsigned int* types, and 64 bits have long long, unsigned long long types, void*, char*, int*, unsigned int*. The float, double, and long double data types have sizes that depend on the platform and compiler. They usually have sizes of 32, 64 and 80 bits, respectively."<<endl;




    return 0;
}