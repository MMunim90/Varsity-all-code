/*Q.Write a C program to input number from user and check
number is palindrome or not using while loop.
*/
#include <stdio.h>
int main() {
    int originalNumber, reversedNumber = 0, remainder, temp;
    printf("Enter a number: ");
    scanf("%d", &originalNumber);
    temp = originalNumber;
    while (temp != 0) {
        remainder = temp % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temp /= 10;
    }
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n\n", originalNumber);
    }
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

