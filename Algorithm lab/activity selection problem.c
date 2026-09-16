#include <stdio.h>
int main()
{
    int n, i, j, k, m, temp, s[100], f[100], a[100], p[100];
    printf("Enter number of activities: ");
    scanf("%d", &n);
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        printf("Enter starting time of a%d: ", i);
        scanf("%d", &s[i]);
        printf("Enter finish time of a%d: ", i);
        scanf("%d", &f[i]);
        a[i] = i;
    }
    printf("\nStarting Time\tFinish Time\tActivity Name\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t%d\t\ta%d\n", s[i], f[i], a[i]);
    }
    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (f[j] > f[j + 1])
            {
                // Swap finish times
                temp = f[j];
                f[j] = f[j + 1];
                f[j + 1] = temp;
                // Swap start times
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                // Swap activity indices
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("\nSorted Activities by Finish Time:\n\n");
    printf("Starting Time\tFinish Time\tActivity Name\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t%d\t\ta%d\n", s[i], f[i], a[i]);
    }
    k = 1;
    i = 1;
    p[k] = a[i];
    for (m = 2; m <= n; m++)
    {
        if (s[m] >= f[i])
        {
            k = k + 1;
            p[k] = a[m];
            i = m;
        }
    }
    printf("\nThe selected activities are: ");
    for (i = 1; i <= k; i++)
    {
        printf("a%d ", p[i]);
    }
    return 0;
}
