#include<stdio.h>
int main()
{
    int a[100], n, i, item, mid, end, beg;
    printf("Enter Limit of array: ");
    scanf("%d", &n);

    printf("Enter the values of array: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Values of array: ");
    for(i=1; i<=n; i++)
    {
        printf("%d", a[i]);
    }

    printf("Enter item you want search: ");
    scanf("%d", &item);

    beg = 1;
    end = n;
    mid = (beg + end) / 2;
    while((beg<=end) && (a[mid] != item))
    {
        if(item<a[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if(a[mid] == item)
    {
        printf("item found at location %d", mid);
    }
    else
    {
        printf("Item Does not exist !!!");
    }
}
