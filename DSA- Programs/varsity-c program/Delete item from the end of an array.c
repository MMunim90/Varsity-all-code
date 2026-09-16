/*#include <stdio.h>
#include <stdlib.h>

void deleteFromEnd(int **arr, int *size) {
    if (*size <= 0) {
        printf("Array is empty. Cannot delete from an empty array.\n");
        return;
    }

    (*size)--;

    *arr = (int*)realloc(*arr, (*size) * sizeof(int));

    if (*size == 0) {
        free(*arr);
        *arr = NULL;
    }
}

int main() {
    int *arr, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    deleteFromEnd(&arr, &size);

    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
*/


#include <stdio.h>
int main()
{
    int n, a[100], i;
    printf("Enter size of the array :");
    scanf("%d", &n);
    printf("Enter elements of the array :\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("After declaration array elements are :");
    for(i=0; i<n-1; i++){
        printf("%d  ", a[i]);
    }
    return 0;
}

