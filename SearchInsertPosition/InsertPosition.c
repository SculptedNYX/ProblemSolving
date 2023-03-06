#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target);

int main()
{
    int arr[] = {1,3,5,6};
    printf("%d",searchInsert(arr, 4, 3));
    return 0;
}

int searchInsert(int* nums, int numsSize, int target)
{
    int min = 0;
    int max = numsSize;
    int mid;

    while(min < max)
    {
        mid = (max+min)/2;

        if(nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            min = mid + 1;
        }
        else
        {
            max = mid;
        }
    }
    return min;
}