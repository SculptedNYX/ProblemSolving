#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
{
    int num[] = {0,4,3,0};
    int* arr = twoSum(num, 4, 0, NULL);
    if(arr != NULL)
    {
        printf("[%d,%d]", arr[0], arr[1]);
    }
    else
    {
        printf("\nthe array doesnt have any elements");
    }

    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    //*returnSize = 2; // this part is needed for leetcode
    int* returnArr = (int*) malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize; i++)
    { 
        for (int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                returnArr[0] = i;
                returnArr[1] = j;
                return returnArr;
            }
        }
        
    }
    return NULL;
}