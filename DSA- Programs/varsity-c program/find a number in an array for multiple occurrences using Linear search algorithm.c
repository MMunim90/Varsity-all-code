/*#include <stdio.h>
void findOccurrences(int arr[], int n, int target) {
    int found = 0;
    printf("Occurrences of %d in the array: \n", target);
    for (int c = 0; c < n; c++) {
        if (arr[c] == target) {
            printf("Found at index %d\n", c);
            found = 1;
        }
    }
    if (!found) {
        printf("Not found in the array.\n");
    }
}
int main() {
    int arr[100], c, n;
    printf("Enter number of elements in array :");
    scanf("%d", &n);
    printf("Enter %d integer(s) \n", n);
    for(c=0; c<n; c++){
        scanf("%d", &arr[c]);
    }
    if (n == 0) {
        printf("Array is empty.\n");
        return 1;
    }
    int target;
    printf("Enter the number to find: ");
    scanf("%d", &target);
    findOccurrences(arr, n, target);
    return 0;
}
*/
#include <stdio.h>
int main() {
    int array[100], search, i, n, count = 0;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    printf("Positions of %d in the array:\n", search);
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf("The number %d is not present in the array.\n", search);
    } else {
        printf("\n%d is present %d times in the array.\n", search, count);
    }
    return 0;
}
