#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char a[4] = { "srt" };
    if (strcmp(a,"str")==0) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }
    return EXIT_SUCCESS;
}