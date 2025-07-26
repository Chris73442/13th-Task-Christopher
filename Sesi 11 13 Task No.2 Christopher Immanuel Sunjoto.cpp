#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Input: ");
    gets(str); // gunakan fgets di versi terbaru

    printf("Rotated: ");
    for(int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

