#include <iostream>
#include <stdio.h>
using namespace std;


int zd5()
{
    int M[5] = {1, 2, 3, 4, 5};
    int new_value;

    printf("beginner massive: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    printf("Pls input new value M[2]: ");
    if (scanf("%d", &new_value) != 1) {
        printf("wrong input\n");
    } else {
        M[2] = new_value;
        printf("Massive after change : ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", M[i]);
        }
        printf("\n");
    }

    return 0;
}