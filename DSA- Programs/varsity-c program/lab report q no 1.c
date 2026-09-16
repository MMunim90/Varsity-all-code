/*Q. Write a C program to perform addition, subtraction, multiplication and division of two
integer numbers, where the two integers are provided by user on runtime and show the
result on the screen.*/
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    if (num2 != 0) {
        printf("%d / %d = %.2f\n\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Cannot perform division as the second number is zero.\n");
    }
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}
