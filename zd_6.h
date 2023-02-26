#include <iostream>
using namespace std;


int zd6()

{

    unsigned char M8[] = {0xED, 0xED, 0xED, 0xED, 0xED};
    cout<<"x8"<<endl;
    for (unsigned char i : M8) printf("%u ", i);


    printf("\nPls input new value M8[2]: ");
    unsigned int new_value;
    if (scanf("%u", &new_value) != 1) {
        printf("wrong input\n");
    } else if (new_value > 255) {
        printf("wrong input\n");
    } else {
        M8[2] = static_cast<unsigned char>(new_value);
        printf("Massive after change : ");
        for (unsigned char i : M8) {
            printf("%u ", i);
        }
        printf("\n");
    }
    return 0;
}