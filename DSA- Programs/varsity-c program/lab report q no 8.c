/*Q. Write a C program to input a number from user and print
multiplication table of the given number using for loop.
*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Multiplication table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    printf("\nName: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}
