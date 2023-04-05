#include <iostream>
using namespace std;

unsigned int round_down(unsigned int x) {
    return x & ~(0xf);  // обнуляем младшие 4 бита
}

unsigned int round_up(unsigned int x) {
    return (x + 0xf) & ~(0xf);  // добавляем 15 и обнуляем младшие 4 бита
}

int core5() {
    unsigned int x = 123;
    cout << "x = " << x << endl;
    cout << "x rounded down to nearest multiple of 16 = " << round_down(x) << endl;
    cout << "x rounded up to nearest multiple of 16 = " << round_up(x) << endl;
    return 0;
}