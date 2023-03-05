#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;
//Вариант из таблицы 1,входные данные:x = 0x99887766, y = 5, z = −5





void printDump(void* p, size_t N) {
    unsigned char* ptr = (unsigned char*) p;
    for (size_t i = 0; i < N; i++) {
        printf("%02X ", *(ptr + i));
    }
    printf("\n");
}










int ex_8()
{
    const char* s1 = "jzyx";
    printf("s1 = %s, address = %p\n", s1, s1);
    printDump((void*) s1, strlen(s1) + 1);

    const char* s2 = "ёяюэ";
    printf("s2 = %s, address = %p\n", s2, s2);
    printDump((void*) s2, strlen(s2) + 1);

    const wchar_t* ws1 = L"jzyx";
    wprintf(L"ws1 = %ls, address = %p\n", ws1, ws1);
    printDump((void*) ws1, wcslen(ws1) * sizeof(wchar_t) + 2);

    const wchar_t* ws2 = L"ёяюэ";
    wprintf(L"ws2 = %ls, address = %p\n", ws2, ws2);
    printDump((void*) ws2, wcslen(ws2) * sizeof(wchar_t) + 2);
}