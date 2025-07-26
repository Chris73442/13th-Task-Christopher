#include <stdio.h>

int main() {
    int arr[10], max, min, sum = 0;
    float avg;

    // Input
    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Init
    max = min = arr[0];

    // Max, Min
    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    avg = sum / 10.0;

    printf("Max: %d\nMin: %d\nAverage: %.2f\n", max, min, avg);

    return 0;
}

