#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) {
    char str[100] = "Hello";
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("%s\n", str);
    return EXIT_SUCCESS;
}