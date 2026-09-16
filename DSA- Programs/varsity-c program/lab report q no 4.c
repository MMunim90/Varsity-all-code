/*Q. Write a C program to check whether a number is divisible
by 5 and 11 or not using if else. Receive the number as input from user.
*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 11 == 0) {
        printf("%d is divisible by both 5 and 11.\n\n", number);
    } else {
        printf("%d is not divisible by both 5 and 11.\n\n", number);
    }
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}


