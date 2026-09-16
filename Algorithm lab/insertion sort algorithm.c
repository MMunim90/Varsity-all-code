#include<stdio.h>
int main()
{
    int a[100], n, j, k, temp;
    printf("Enter limit of Array: ");
    scanf("%d", &n);

    printf("Enter the values of array: ");
    for(j=1; j<=n; j++)
    {
        scanf("%d", &a[j]);
    }
    printf("The Values of array: ");
    for(j=1; j<=n; j++)
    {
        printf("%d", a[j]);
    }
    for(j=2; j<=n; j++)
    {
        temp = a[j];
        k = j-1;
        while((k>=1) && (a[k]> temp))
        {
            a[k+1] = a[k];
            k = k - 1;
        }
        a[k+1] = temp;
    }
    printf("The values of array: ");
    for(j=1; j<=n; j++)
    {
        printf("%d", a[j]);
    }
}
