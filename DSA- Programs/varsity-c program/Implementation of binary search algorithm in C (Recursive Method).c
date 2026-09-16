#include <stdio.h>
int binarySearchRecursive(int array[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            return binarySearchRecursive(array, mid + 1, high, target);
        } else {
            return binarySearchRecursive(array, low, mid - 1, target);
        }
    }
    return -1;
}
int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearchRecursive(array, 0, size - 1, target);

    if (result != -1) {
        printf("%d found at index %d.\n", target, result);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}
