#include <iostream>
using namespace std;


int zd5()
{
    unsigned short M16[] = {0xDEAD, 0xDEAD, 0xDEAD, 0xDEAD, 0xDEAD};
    unsigned int M32[] = {0xC0CAC01A, 0xC0CAC01A, 0xC0CAC01A, 0xC0CAC01A, 0xC0CAC01A};
    unsigned long long M64[] = {0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7, 0xC0FFEE11BEA7};
    float x = -10.0f / 3.0f;
    double y = -10.0 / 3.0;
    float Ms[] = {x, x, x, x, x};
    double Ml[] = {y, y, y, y, y};


    cout << "x16" << endl;
    for (unsigned short i : M16) {
        printf("%hu ", i);}
    cout << "x32" << endl;
    for (unsigned int i : M32) {
        printf("%u ", i);}
    cout << "x64" << endl;
    for (unsigned long long i : M64) {
        printf("%llu ", i);}
    cout << endl;
    cout << "Ms: ";
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", Ms[i]);
    }
    cout << endl;

    cout << "Ml: ";
    for (int i = 0; i < 5; i++) {
        printf("%.2lf ", Ml[i]);
    }
    cout << endl;
    cout << "A new values for five massives\n ";
    scanf("%hu %u %llu %f %lf", &M16[2], &M32[2], &M64[2], &Ms[2], &Ml[2]);
    cout << "massive check";
    cout <<endl;
    cout << "x16" << endl;
    for (unsigned short i : M16) {
        printf("%hu ", i);}
    cout << "x32" << endl;
    for (unsigned int i : M32) {
        printf("%u ", i);}
    cout << "x64" << endl;
    for (unsigned long long i : M64) {
        printf("%llu ", i);}
    cout << endl;

    cout << "Ms: ";
    for (float i : Ms) {
        printf("%f ", i);}

    cout << endl;

    cout << "Ml: ";
    for (double i : Ml) {
        printf("%lf ", i);}

}