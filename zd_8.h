#include <cstdio>
#include <cstdlib>
#include <cstring>

int zd_8() {
    char s1[100], s3[100];
    printf("Enter a string with spaces: ");
    fflush(stdout);
    scanf("%[^\n]", s3);
    fflush(stdin);

    printf("Enter a word without spaces: ");
    fflush(stdout);
    scanf("%s", s1);
    fflush(stdin);

    char s2[10];  // объявление буфера для слова s2 длиной 10 символов
    printf("Enter word s2: ");
    fgets(s2, sizeof(s2), stdin);  // функция fgets для безопасного чтения строки
    s2[strcspn(s2, "\n")] = '\0';  // удаляем символ переноса строки, если он был считан


    printf("***%s***\n", s1);
    printf("***%s***\n", s2);
    printf("***%s***\n", s3);
    fflush(stdout);

    return 0;
}
