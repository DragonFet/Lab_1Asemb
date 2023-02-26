#include <iostream>
#include <stdio.h>

using namespace std;



int launch4()
{
    const int N=5;
    cout<<endl<<"x16"<<endl;
    ::uint16_t x1= 0xDEAD;
    ::uint16_t Ms[N]={x1,x1,x1,x1,x1};
    for (::uint16_t M : Ms) {
        printf("%04X", M);
        cout<<"\t";
    }
    cout<<endl<<"x32"<<endl;
    uint32_t x = 0xC0CAC01A;
    uint32_t Ml[5] = {x, x, x, x, x};
    uint64_t Mq[5] = {0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7};
    printf("Ml array: ");
    for (unsigned int i : Ml) {
        printf("%08X ", i);
    }
    printf("\nMq array: ");
    for (unsigned long long i : Mq) {
        printf("%016llX ", i);
    }
    cout<<endl<<"x32 float "<<endl;
    float x5 = -10.0f/3.0f;
    float Mfs[N]={x5,x5,x5,x5,x5};
    for (float J:Mfs)
    {
        std::printf("%f",J);
        cout<<'\t';
    }
    cout<<endl;
    cout<<endl<<"x64 double "<<endl;
    double y = -10.0/3.0;
    double Mfl[N]={y,y,y,y,y};
    for (double L:Mfl)
    {
        std::printf("%lf",L);
        cout<<'\t';
    }
    cout<<endl;
    return  0;
}