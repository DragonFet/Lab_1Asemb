#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], s3[100];

    // Input string s1
    fgets(s1, 100, stdin);

    // Input string s2 with max length of 99
    strncpy(s2, s1, 99);
    s2[99] = '\0';

    // Input string s3 with possible spaces
    char *token = strtok(s1, " ");
    strcpy(s3, token);
    while(token != NULL) {
        token = strtok(NULL, " ");
        if(token != NULL) {
            strcat(s3, " ");
            strcat(s3, token);
        }
    }

    printf("***%s***\n***%s***\n***%s***\n", s1, s2, s3);
    return 0;
}