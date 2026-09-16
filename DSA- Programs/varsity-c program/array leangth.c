#include <stdio.h>

int main() {
    int size;

    printf("Enter the number of the array: ");
    scanf("%d", &size);

    int num[size], i;

    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; ++i) {
        printf("Enter element %d: ", i);
        scanf("%d", &num[i]);
    }

    int sum = 0;
    for (i = 0; i < size; ++i) {
        sum += num[i];
    }

    float average = (float)sum / size;

    printf("\nLength of the array: %d\n", size);
    printf("Average of the array elements: %.2f\n", average);

    return 0;
}

