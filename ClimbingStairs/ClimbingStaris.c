#include <stdio.h>

int climbStairs(int n);
int createDecisionTree(int currentStep, int target);

int main()
{
    printf("final result is %d\n", climbStairs(3));

    return 0;
}

int climbStairs(int n)
{
    return createDecisionTree(0, n);
}

int createDecisionTree(int currentStep, int target)
{
    if(currentStep == target)
    {
        return 1;
    }

    if(currentStep > target)
    {
        return 0;
    }

    return createDecisionTree(currentStep + 1,target) + createDecisionTree(currentStep + 2, target);
}