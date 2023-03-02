#include <iostream>
#include <iomanip>

using namespace std;

void printPointer(void* p) {
    char* p1 = reinterpret_cast<char*>(p);
    unsigned short* p2 = reinterpret_cast<unsigned short*>(p);
    double* p3 = reinterpret_cast<double*>(p);
    cout << "Value of *p1 (char): " << hex << static_cast<int>(*p1) << endl;
    cout << "Value of *p2 (unsigned short): " << hex << *p2 << endl;
    cout << "Value of *p3 (double): " << hex << *p3 << endl;
    int* p4 = reinterpret_cast<int*>(p);
    cout << "Value of *p (void): " << hex << *p4 << endl;
}

int ex_2() {
    long long p1 = 0x8877665544332211;
    printPointer(&p1);
    ::printf("Now we gona testing char array \n");
    char p2[] = "abcdefgh0123456789";
    printPointer(p2);

    return 0;
}