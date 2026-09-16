/*Q. Write a C program to input number of days from user and convert
it to years, weeks and days. Receive the input from user on runtime.
*/
#include <stdio.h>
int main() {
    int totalDays;
    int years, weeks, days;
    printf("Enter the number of days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;
    weeks = (totalDays % 365) / 7;
    days = totalDays % 7;
    printf("\n%d days is equivalent to %d years, %d weeks, and %d days.\n\n", totalDays, years, weeks, days);
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}
