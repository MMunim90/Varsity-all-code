/*Q. Write a C Program to calculate the Average of an
array elements where the elements are received as input.
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
    double sum = 0, average;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / n;
    printf("Average of the array elements: %.2f\n\n", average);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

