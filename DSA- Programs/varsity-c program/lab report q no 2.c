/*Q. Write a C program to find out the average of 3 integers numbers where the
three integers are provided by user on runtime and show the result on the screen.
*/
#include <stdio.h>
int main() {
    int num1, num2, num3;
    float average;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);
    average = (float)(num1 + num2 + num3) / 3;
    printf("\nThe average of %d, %d, and %d is: %.2f\n\n", num1, num2, num3, average);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

