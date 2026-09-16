#include<stdio.h>
sum();
main()
{
    sum();
    sum();
    sum();

    return 0;
}
sum()
{
    int a, b, c;
    printf("enter two number : ");
    scanf("%d %d", &a, &b);

    c = a+ b;
    printf("the sum is : %d\n", c);
}
