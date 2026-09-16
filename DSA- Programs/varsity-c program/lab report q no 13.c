/*Q. Write a program in C so that the program will read a one-dimensional array and find out
the largest element present in the array. Receive the array elements as input from user.
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n\n", largest);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

