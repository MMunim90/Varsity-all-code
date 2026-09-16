/*Q. Write a program using for loop to find the sum of first n natural
numbers where n is entered by user. Note: 1,2,3... are called natural numbers.
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is: %d\n\n", n, sum);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

