#include <stdio.h>
int findMaximum(int arr[], int n) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return arr[max_index];
}

int findMinimum(int arr[], int n) {
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return arr[min_index];
}

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_element = findMaximum(arr, n);
    int min_element = findMinimum(arr, n);

    printf("Maximum element in the array: %d\n", max_element);
    printf("Minimum element in the array: %d\n", min_element);

    return 0;
}
