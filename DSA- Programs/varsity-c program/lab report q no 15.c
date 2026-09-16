/*Q. Write a C Program to receive N number of names as input
from user and then sort the Names in an Alphabetical Order.*/
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    char names[n][100];
    printf("Enter the names:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);}
    printf("Name: MD. SHAHAN AL MUNIM. Roll: 3802");
    getch();
}

