/*Q. Write a C program using the concept of loop to input
number from user and check whether number is Strong number or not
*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int number, originalNumber, digit, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &number);
    temp = number;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == number) {
        printf("%d is a Strong number.\n", number);
    } else {
        printf("%d is not a Strong number.\n", number);
    }
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

