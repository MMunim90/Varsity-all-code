#include <stdio.h>

int main() {
     int array[100], c, n;
    printf("Enter number of elements in array \n");
    scanf("%d", &n);
    printf("Enter %d integer(s) \n", n);
    for(c=0; c<n; c++){
        scanf("%d", &array[c]);
    }

    if (n == 0) {
        printf("Array is empty.\n");
        return 1;
    }

    int max_value = array[0];
    int max_index = 0;

    for (c = 0; c < n; c++) {
        if (array[c] > max_value) {
            max_value = array[c];
            max_index = c;
        }
    }

    printf("Maximum value: %d\n", max_value);
    printf("Location (Index) of maximum value: %d\n", max_index);

    return 0;
}

