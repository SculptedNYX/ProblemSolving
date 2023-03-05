#include<stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main()
{
    int nums[]  = {1,1,1,2,2,3,4,4,5,5,5,5,10};
    int k = removeDuplicates(nums,13);

    printf("%d\n", k);
    for (int i = 0; i < k; i++)
    {
        printf("%d", nums[i]);
    }
    return 0;
}

int removeDuplicates(int* nums, int numsSize)
{
    if(numsSize == 0 || nums == NULL)
    {
        return 0;
    }

    int latestunique = nums[0];
    int k = 1;

    for(int i = 1; i < numsSize; i++)
    {
        if(latestunique != nums[i])
        {
            latestunique = nums[i];
            nums[k] = latestunique;
            k++;
        }
    }

    return k;
}