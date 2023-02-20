#include <iostream>


using namespace std;



int zd6()
{
    uint16_t x16 = 0xDEAD;
    uint32_t x32 = 0xC0CAC01A;
    uint64_t x64 = 0xC0FFEE11BEA7;

    uint16_t ms[5] = {x16, x16, x16, x16, x16};
    uint32_t ml[5] = {x32, x32, x32, x32, x32};
    uint64_t mq[5] = {x64, x64, x64, x64, x64};

    std::cout << "Array of 16-bit integers: ";
    for (int i = 0; i < 5; i++)
        std::printf("%04x ", ms[i]);
    std::cout << std::endl;

    std::cout << "Array of 32-bit integers: ";
    for (int i = 0; i < 5; i++)
        std::printf("%08x ", ml[i]);
    std::cout << std::endl;

    std::cout << "Array of 64-bit integers: ";
    for (int i = 0; i < 5; i++)
        std::printf("%016llx ", mq[i]);
    std::cout << std::endl;

    const int N = 5;
    float x = -10.0f/3.0f;
    double y = -10.0/3.0;
    float Ms[N] = {x, x, x, x, x};
    double Ml[N] = {y, y, y, y, y};
    cout << "Ms: ";
    for (int i = 0; i < N; i++) {
        printf("%.2f ", Ms[i]);
    }
    cout << endl;

    cout << "Ml: ";
    for (int i = 0; i < N; i++) {
        printf("%.2lf ", Ml[i]);
    }
    cout<<endl;
    return 0;
}