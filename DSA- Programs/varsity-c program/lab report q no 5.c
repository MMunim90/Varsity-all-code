/*Q. Write a C Program to input a number from user
and check whether the given number is even or odd.
*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is an even number.\n\n", number);
    } else {
        printf("%d is an odd number.\n\n", number);
    }
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

