#include <stdio.h>

int main() {
    int A[3][4] = {{3,4,5,5}, {1,7,11,10}, {2,8,9,4}};
    int B[4][3] = {{1,2,3}, {3,4,5}, {9,10,11}, {6,4,3}};
    int C[3][3] = {0};

    // Multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display
    printf("Result of Multiplication:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%5d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

