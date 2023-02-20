#include <stdio.h>
#include <string.h>

int main() {
    const int N = 5;
    float x = -10.0f/3.0f;
    float Mfs[N] = {x, x, x, x, x};
    float new_value1;
    float new_value2;
    float new_value3;
    float new_value4;
    float new_value5;
    if (scanf("%f %f %f %f %f", &new_value1,&new_value2,&new_value3,&new_value4,&new_value5) != 5) {
        printf("Error\n");
    } else {
        Mfs[0] = new_value1;
        Mfs[1] = new_value2;
        Mfs[2] = new_value3;
        Mfs[3] = new_value4;
        Mfs[4] = new_value5;
        printf("Mass after changing: ");
        for (int i = 0; i < 5; i++) {
            printf("%f ", Mfs[i]);
        }
        printf("\n");
    }




}