/*Q. Write a C program using for loop to find all the
odd numbers from 1 to n where n is entered by user.
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Odd numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}
