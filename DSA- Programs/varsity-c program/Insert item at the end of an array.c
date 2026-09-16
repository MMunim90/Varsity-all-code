#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[100], c, n, element;
    printf("Enter number of elements in array \n");
    scanf("%d", &n);
    printf("Enter %d integer(s) \n", n);
    for(c=0; c<n; c++){
        scanf("%d", &arr[c]);
    }
    printf("\nEnter Element to Insert: ");
    scanf("%d", &element);
    arr[c] = element;
    printf("\nThe New Array is:\n");
    for(c=0; c<=n; c++){
        printf("%d ", arr[c]);
    }

    getch();
    return 0;
}
