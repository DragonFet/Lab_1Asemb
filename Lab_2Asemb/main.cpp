#include <iostream>
#include "ex_1.h"
#include "ex_2.h"
#include "ex_3.h"
using namespace  std;

void skipex()
{
    for (int i=0;i<9999;i++)
    {
        ::printf("\n");
    }
}

int main() {
    ::printf("This first task \n ");
    ex_first();
    ::system("pause");
    skipex();
    ::printf("This second task \n");
    ex_2();
    ::system("pause");
    skipex();
    ex_3();
    ::system("pause");
    skipex();
    return 0;
}
