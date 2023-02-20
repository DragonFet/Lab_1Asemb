#include <iostream>
#include <stdio.h>
using namespace std;


int zd5()
{
    setlocale(LC_ALL, "Russian");
    int M[5] = {1, 2, 3, 4, 5};
    int new_value;

    printf("Исходный массив: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", M[i]);
    }
    printf("\n");

    printf("Введите новое значение элемента M[2]: ");
    if (scanf("%d", &new_value) != 1) {
        printf("Ошибка ввода\n");
    } else {
        M[2] = new_value;
        printf("Массив после изменения: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", M[i]);
        }
        printf("\n");
    }

    return 0;
}
