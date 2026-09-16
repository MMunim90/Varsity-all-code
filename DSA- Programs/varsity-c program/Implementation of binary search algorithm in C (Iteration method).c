#include <stdio.h>
int binarySearch(int array[], int size, int target) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (array[mid] == target) {
            return mid;
        } else if (array[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    int array[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int result = binarySearch(array, size, target);
    if (result != -1) {
        printf("%d found at index %d.\n", target, result);
    } else {
        printf("%d not found in the array.\n", target);
    }
    return 0;
}
