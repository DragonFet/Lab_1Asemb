#include <iostream>
#include <cstdint>
using namespace std;


int launch4()
{
    uint16_t x16=0xDEAD;
    uint32_t x32=0xC0CAC01A;
    uint64_t x64=0xC0FFEE11BEA7;
    uint16_t M16[5] = {x16, x16, x16, x16, x16};
    uint32_t M32[5] = {x32, x32, x32, x32, x32};
    uint64_t M64[5] = {x64, x64, x64, x64, x64};
    const int N = 5;
    float x = -10.0f/3.0f;
    double y = -10.0/3.0;
    float Ms[N] = {x, x, x, x, x};
    double Ml[N] = {y, y, y, y, y};

    cout<<"x16"<<endl;
    for (int i = 0; i < 5; ++i) printf("%04X ", M16[i]);
    cout<<"x32"<<endl;
    for (int i = 0; i < 5; ++i) printf("%08X ", M32[i]);
    cout<<"x64"<<endl;
    for (int i = 0; i < 5; ++i) printf("%016llX ", M64[i]);
    cout<<endl;
    cout << "Ms: ";
    for (int i = 0; i < N; i++) {
        printf("%.2f ", Ms[i]);
    }
    cout << endl;

    cout << "Ml: ";
    for (int i = 0; i < N; i++) {
        printf("%.2lf ", Ml[i]);
    }
    cout << endl;

}