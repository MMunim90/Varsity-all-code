#include <stdio.h>
#include <string.h>
void merge(char arr[][100], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    char L[n1][100], R[n2][100];
    for (i = 0; i < n1; i++)
        strcpy(L[i], arr[l + i]);
    for (j = 0; j < n2; j++)
        strcpy(R[j], arr[m + 1 + j]);
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (strcmp(L[i], R[j]) <= 0)
        {
            strcpy(arr[k], L[i]);
            i++;
        }
        else
        {
            strcpy(arr[k], R[j]);
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }
    while (j < n2)
    {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}
void mergeSort(char arr[][100], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    char arr[100][100];
    int n, i;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++)
        scanf("%s", arr[i]);
    mergeSort(arr, 0, n - 1);
    printf("Sorted strings in lexicographic order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}
