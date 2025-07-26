#include <stdio.h>

int main() {
    int A[3][4] = {{3,4,5,5}, {1,7,11,10}, {2,8,9,4}};
    int B[3][4] = {{1,2,3,4}, {8,7,6,5}, {9,10,11,3}};
    int C[3][4];

    printf("Result of Addition:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

