/*Q. Write a C program using while loop to input decimal
number from user and convert to binary number system.
*/
#include <stdio.h>
int main() {
    int decimalNumber, remainder, binaryEquivalent = 0, placeValue = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryEquivalent = binaryEquivalent + remainder * placeValue;
        placeValue *= 10;
        decimalNumber /= 2;
    }
    printf("Binary equivalent: %d\n\n", binaryEquivalent);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}
