#include<stdio.h>
int main()
{
    float w[100], p[100], tw[100], load, cost, m;
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter Maximum Load of knapsack: ");
    scanf("%f", &m);

    for(i=1; i<=n; i++)
    {
        printf("Enter weight of item %d: ", i);
        scanf("%f", &w[i]);
        printf("Enter profit of item %d: ", i);
        scanf("%f", &p[i]);
    }

    printf("\n\nItem no\t\tWeight\t\tValue\n");
    for(i=1; i<=n; i++)
    {
        printf("\n%d\t\t%.2f\t\t%.2f\n", i, w[i] ,p[i]);
    }

    load = 0;
    cost = 0;

    i = 1;

    while(load<m && i<=n)
    {
        if(w[i] <= (m-load))
        {
            tw[i] = w[i];
            load = load + tw[i];
            cost = cost + ((p[i]/w[i]) * tw[i]);
        }
        else
        {
            tw[i] = m - load;
            load = load + tw[i];
            cost = cost + ((p[i] / w [i]) * tw[i]);
        }
        i = i+ 1;
    }
    printf("\n\nCost of taken product: %.2f", cost);

    return 0;
}
