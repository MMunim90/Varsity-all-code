//implementation of bubble sort algorithm using function
/*#include<stdio.h>

void bubble_sort(int arr[], int n)
{
    int i, j;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int arr[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("Sorted array:\n");
    for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}*/


//Apply bubble sort to sort an array of strings in lexicographic order.
/*#include<stdio.h>
#include<string.h>

void bubble_sort(char arr[][100], int n)
{
    int i, j;
    char temp[100];
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(strcmp(arr[j], arr[j+1])>0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
}

int main()
{
    char arr[100][100];
    int n,i;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%s", arr[i]);
    }

    bubble_sort(arr, n);

    printf("Sorted strings in lexicographic order:\n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}*/


//use selection sort to find the maximum or minimum element in an array without fully sorting it.
/*#include<stdio.h>
int find_maximum(int arr[], int n)
{
    int max_index = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] > arr[max_index])
        {
            max_index = i;
        }
    }
    return arr[max_index];
}

int find_minimum(int arr[], int n)
{
    int min_index = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[min_index])
        {
            min_index = i;
        }
    }
    return arr[min_index];
}

int main()
{
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max_element = find_maximum(arr, n);
    int min_element = find_minimum(arr, n);

    printf("Maximum element in the array: %d\n", max_element);
    printf("Minimum element in the array: %d\n", min_element);

    return 0;
}*/


//Apply merge sort to sort an array of strings in lexicographic order.
/*#include<stdio.h>
#include<string.h>
void merge(char arr[][100], int l, int m, int r)
{
    int i, j, k;
    int n1 = m-l+1;
    int n2 = r-m;
    char L[n1][100], R[n2][100];

    for(i=0; i<n1; i++)
    {
        strcpy(L[i], arr[l+i]);
    }
    for(j=0; j<n2;  j++)
    {
        strcpy(R[j], arr[m+1+j]);
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(strcmp(L[i], R[j])<=0)
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
    while(i<n1)
    {
        strcpy(arr[k], L[i]);
        i++;
        k++;
    }
    while(j<n2)
    {
        strcpy(arr[k], R[j]);
        j++;
        k++;
    }
}
void merge_sort(char arr[][100], int l, int r)
{
    if(l<r)
    {
        int m = l+(r-l)/2;
        merge_sort(arr, l, m);
        merge_sort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    char arr[100][100];
    int n, i;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%s", arr[i]);
    }
    merge_sort(arr, 0, n-1);
    printf("Sorted strings in lexicographic order: \n");
    for(int i=0; i<n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}*/


//Write a C program to create and traverse a linked list.
/*#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct  Node* next;
};
void print_list(struct Node* node)
{
    while(node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printf("Linked List elements: ");
    print_list(head);
    free(head);
    free(second);
    free(third);

    return 0;
}*/


//c program that accepts a string and reverse it using a stack.
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max_length 100

typedef struct
{
    char items[max_length];
    int top;
}Stack;

void push(Stack *stack, char c);
char pop(Stack *stack);
int isEmpty(Stack *stack);

int main()
{
    char input[max_length];
    printf("Enter a string: ");
    fgets(input, max_length, stdin);

    Stack stack;
    stack.top = -1;

    for(int i=0; i<strlen(input); i++)
    {
        if(input[i] != '\n')
        {
            push(&stack, input[i]);
        }
    }
    printf("Reversed string: ");
    while(!isEmpty(&stack))
    {
        printf("%c", pop(&stack));
    }
    printf("\n");

    return 0;
}
void push(Stack *stack, char c)
{
    if(stack->top == max_length - 1)
    {
        printf('Stack overflow\n');
        exit(1);
    }
    stack->items[++stack->top] = c;
}

char pop(Stack *stack)
{
    if(isEmpty(stack))
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}*/


//find a number in an array for multiple occurrences using linear search algorithm
/*#include<stdio.h>
void find_occurences(int arr[], int n, int target)
{
    int found = 0;
    printf("Occurences of %d in the array: \n", target);
    for(int c=0; c<n; c++)
    {
        if(arr[c] == target)
        {
            printf("Found at index %d\n", c);
            found = 1;
        }
    }
    if(!found)
    {
        printf("Not found in this array.\n");
    }
}
int main()
{
    int arr[100], c, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %dth integers: ", n);
    for(c=0; c<n; c++)
    {
        scanf("%d", &arr[c]);
        //printf("Enter %d more integers: ", n = n-1);
    }
    if(n==0)
    {
        printf("The array is empty.\n");
        return 1;
    }
    int target;
    printf("Enter the number to find: ");
    scanf("%d", &target);
    find_occurences(arr, n, target);
    return 0;
}*/


//implementation of binary search algorithm in c. (iteration method)
/*#include<stdio.h>
int binary_search(int array[], int size, int target)
{
    int low = 0, high = size - 1, mid;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid -1;
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);
    int result = binary_search(array, size, target);
    if(result != -1)
    {
        printf("%d found at index %d. \n", target, result);
    }
    else
    {
        printf("%d not found in the array. \n", target);
    }
    return 0;
}*/


//implementation of binary search algorithm in c(recursive method)
/*#include<stdio.h>
int binary_search_recursive(int array[], int low, int high, int target)
{
    if(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(array[mid] == target)
        {
            return mid;
        }
        else if(array[mid] < target)
        {
            return binary_search_recursive(array, mid+1, high, target);
        }
        else
        {
            return binary_search_recursive(array, low, mid-1, target);
        }
    }
    return -1;
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binary_search_recursive(array, 0, size -1, target);

    if(result != -1)
    {
        printf("%d found at index %d.\n", target, result);
    }
    else
    {
        printf("%d not found in the array. \n", target);
    }
    return 0;
}*/


//c program to find the first or last occurrence of a given number in a sorted array.
#include<stdio.h>

void search_range(int nums[], int nums_size, int target, int* result)
{
    int first = -1, last = -1;
    for(int i=0; i<nums_size; i++)
    {
        if(nums[i]== target)
        {
            if(first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    result[0] = first;
    result[1] = last;
}
int main()
{
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 7;
    int result[2];

    search_range(nums, 6, target, result);
    printf("First and last position of %d: [%d, %d]\n", target, result[0], result[1]);

    return 0;
}
