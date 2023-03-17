#include <stdio.h>

int removeElement(int* nums, int numsSize, int val);

int main()
{
    int nums[]  = {1,2,1,1,1,2,2};
    int k = removeElement(nums,7,2);

    printf("%d\n", k);
    for (int i = 0; i < k; i++)
    {
        printf("%d", nums[i]);
    }
    return 0;
}

int removeElement(int* nums, int numsSize, int val)
{
    if(numsSize == 0 || nums == NULL)
    {
        return 0;
    }

    int k = 0;

    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i]!=val)
        {
            nums[k]=nums[i];
            k++;
        }
    }

    return k;
}
