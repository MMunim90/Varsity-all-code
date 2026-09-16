#include<stdio.h>
int main()
{
    int a[100], s[100], f[100], n, i, k, m;
    printf("Enter number of activies: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        printf("Enter starting time of a%d: ", i);
        scanf("%d", &s[i]);

        printf("Enter finish time of a%d: ", i);
        scanf("%d", &f[i]);
    }

    printf("Activity no\tstarting time\tfinish time\n");
    for(i=1; i<=n; i++)
    {
        printf("\nA%d\t\t%d\n", i, s[i], f[i]);
    }

    k=1;
    i=1;
    a[k]=i;
    for(m=2; m<=n; m++)
    {
        if(s[m]>=f[i])
        {
            k = k + 1;
            a[k] = m;
            i = m;
        }
    }

    printf("\n\n The selected Activities are: ");
    for(i=1; i<=k; i++)
    {
        printf("A%d", a[i]);
    }
}
