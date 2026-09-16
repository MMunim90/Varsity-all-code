#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void findFirstAndLast(int arr[], int n, int target)
{
    int firstIndex = -1;
    int lastIndex = -1;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
                lastIndex= i;
            }
            else
            {
                lastIndex = i;
            }
        }
    }
    if (firstIndex != -1)
    {
        printf("First Occurrence = %d\n",firstIndex);
        printf("Last Occurrence = %d\n",lastIndex);
    }
    else
    {
        printf("Element Not Found in Array");
    }
}
int main()
{
    int arr[] = {5,7,7,8,8,10};
    int element= 8;
    const int N = ARRAY_SIZE(arr);
    findFirstAndLast(arr,N,element);
    return 0;
}

/*#include <stdio.h>

void searchRange(int nums[], int numsSize, int target, int* result) {
    int first = -1, last = -1;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    result[0] = first;
    result[1] = last;
}

int main() {

    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int result[2];

    searchRange(nums, 6, target, result);

    printf("First and Last Positions of %d: [%d, %d]\n", target, result[0], result[1]);

    return 0;
}
*/
