#include <stdio.h>
#include <string.h>

int zd7() {
    const int N = 5;
    float x = -10.0f/3.0f;
    float Mfs[N] = {x, x, x, x, x};

    if (scanf("%f %f %f %f %f", &Mfs[0],&Mfs[1],&Mfs[2],&Mfs[3],&Mfs[4]) != 5) {
        printf("Error\n");
    } else {

        printf("Mass after changing: ");
        for (int i = 0; i < 5; i++) {
            printf("%f ", Mfs[i]);
        }
        printf("\n");
    }




}
