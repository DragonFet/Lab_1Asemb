#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;


void skipexs()
{
    for (int i=0;i<9999;i++)
    {
        ::printf("\n");
    }
}


void print32(void* p) {
    unsigned int* pUint = static_cast<unsigned int*>(p);
    int* pInt = static_cast<int*>(p);

    cout << "Unsigned int: " << dec << *pUint << endl;
    cout << "Binary: " << bitset<32>(*pUint) << endl;
    cout << "Hexadecimal: " << hex << *pUint << endl;
    cout << endl;

    cout << "Signed int: " << dec << *pInt << endl;
    cout << "Binary: " << bitset<32>(*pInt) << endl;
    cout << "Hexadecimal: " << hex << *pInt << endl;
    cout << endl;
}
void print32v2(void *p) {
    float value = *(float*)p;
    printf("%.15f", value);
}

void print64( void*p)
{
    unsigned long long* pLl = static_cast<unsigned long long*>(p);
    long long * pLL = static_cast<long long*>(p);

    cout << "Unsigned Long long: " << dec << *pLl << endl;
    cout << "Binary: " << bitset<64>(*pLl) << endl;
    cout << "Hexadecimal: " << hex << *pLl << endl;
    cout << endl;

    cout << "Signed Long long: " << dec << *pLL << endl;
    cout << "Binary: " << bitset<64>(*pLL) << endl;
    cout << "Hexadecimal: " << hex << *pLL << endl;
    cout << endl;
}

void print64v2(void *p)
{
    double value = *(double*)p;
    printf("%.20f", value);
}

int ex_4_32() {

    unsigned int maxUint = UINT_MAX;
    unsigned int minUint = 0;
    int maxInt = INT_MAX;
    int minInt = INT_MIN;
    uint32_t x = 0x99887766;
    uint32_t y = 5;
    int32_t z = -5;
    cout<<"MaxUint"<<endl;
    print32(&maxUint);
    system("pause");
    skipexs();
    cout<<"MinUint"<<endl;
    print32(&minUint);
    system("pause");
    skipexs();
    cout<<"Max int "<<endl;
    print32(&maxInt);
    system("pause");
    skipexs();
    cout<<"Min int "<<endl;
    print32(&minInt);
    system("pause");
    skipexs();
    cout<<"x"<<endl;
    print32(&x);
    system("pause");
    skipexs();
    cout<<"y"<<endl;
    print32(&y);
    system("pause");
    skipexs();
    cout<<"z"<<endl;
    print32(&z);
    system("pause");
    skipexs();
    float x2 = 3.14159;
    float y2=5.0;
    float z2=-5.0;
    cout<<"Float x "<<endl;
    print32v2(&x2);
    system("pause");
    skipexs();
    cout<<"Float y"<<endl;
    print32v2(&y2);
    system("pause");
    skipexs();
    cout<<"Float z"<<endl;
    print32v2(&z2);
    system("pause");
    skipexs();
    return 0;
}

int ex_4_64()
{
    unsigned long long maxULlong = ULLONG_MAX;
    unsigned long long minULlong = 0;
    long long maxLlong = LONG_MAX;
    long long  minLlong = LONG_MIN;
    long long  x = 0x99887766;
    long long  y = 5;
    long long z = -5;
    cout<<"MaxULlong"<<endl;
    print64(&maxULlong);
    system("pause");
    skipexs();
    cout<<"MinULlong"<<endl;
    print64(&minULlong);
    system("pause");
    skipexs();
    cout<<"Max Llong "<<endl;
    print64(&maxLlong);
    system("pause");
    skipexs();
    cout<<"Min Llong "<<endl;
    print64(&minLlong);
    system("pause");
    skipexs();
    cout<<"x"<<endl;
    print64(&x);
    system("pause");
    skipexs();
    cout<<"y"<<endl;
    print64(&y);
    system("pause");
    skipexs();
    cout<<"z"<<endl;
    print64(&z);
    system("pause");
    skipexs();
    double x2 = 3.14159;
    double y2=5.0;
    double z2=-5.0;
    cout<<"Double x "<<endl;
    print64v2(&x2);
    system("pause");
    skipexs();
    cout<<"Double y"<<endl;
    print64v2(&y2);
    system("pause");
    skipexs();
    cout<<"Double z"<<endl;
    print64v2(&z2);
    system("pause");
    skipexs();
    return 0;
}