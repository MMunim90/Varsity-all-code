/*#include<stdio.h>
int main()
{
    int n;
    int xyz[n];
    printf("Enter the number of array element : ");
    scanf("%d", &n);
    int values[i];
    printf("Enter the element : ");
    scanf("%d", &i);
    for(i=0; i<=n; i++){
        printf("%d\n", values[i]);
    }
    getch();
}
*/

#include<stdio.h>

int main() {
    int n;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    int values[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    printf("Array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d\n", values[i]);
    }

    return 0;
}
