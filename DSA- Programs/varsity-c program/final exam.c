/*#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, sum;

    printf("Enter a five-digit number: ");
    scanf(" %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    sum = num1 + num2 + num3 + num4 + num5;

    printf("Sum of the five digit number: %d\n", sum);

    return 0;
}
*/
/*#include <stdio.h>

int main() {
    // Declare variables
    int num, digit1, digit2, digit3, digit4, digit5, sum;

    // Get input from the user
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Extract individual digits
    digit1 = num / 10000;
    digit2 = (num % 10000) / 1000;
    digit3 = (num % 1000) / 100;
    digit4 = (num % 100) / 10;
    digit5 = num % 10;

    // Calculate the sum of digits
    sum = digit1 + digit2 + digit3 + digit4 + digit5;

    // Display the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
*/

/*#include <stdio.h>

void calculate(int num1, int num2, int *sum, float *average, int *multiplication) {
    *sum = num1 + num2;
    *average = (float)(*sum) / 2;
    *multiplication = num1 * num2;
}

int main() {
    int num1, num2, sum, multiplication;
    float average;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    calculate(num1, num2, &sum, &average, &multiplication);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Multiplication: %d\n", multiplication);

    return 0;
}
*/
/*#include <stdio.h>

int main() {

    float distance, waitingTime, totalFare;

    printf("Enter the distance traveled (in kilometers): ");
    scanf("%f", &distance);

    printf("Enter the waiting time (in minutes): ");
    scanf("%f", &waitingTime);

    if (distance <= 5) {
        totalFare = distance * 50;
    } else if (distance <= 15) {
        totalFare = 5 * 50 + (distance - 5) * 45;
    } else if (distance <= 45) {
        totalFare = 5 * 50 + 10 * 45 + (distance - 15) * 40;
    } else {
        printf("Distance exceeds the supported range.\n");
        return 1;
    }

    if (waitingTime > 10) {
        totalFare += totalFare * 0.15;
    }


    printf("Total fare: Tk. %.2f\n", totalFare);

    return 0;
}
*/

#include <stdio.h>

int main() {
    const float initialWage = 25000.0;
     const float annualIncreaseRate = 0.03;

    printf("%-10s%-20s\n", "Year", "Minimum Wage");

    for (int year = 1; year <= 10; ++year) {
        float currentWage = initialWage * pow(1 + annualIncreaseRate, year);

        printf("%-10d%-20.2f\n", year, currentWage);
    }

    return 0;
}


