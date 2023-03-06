#include <stdio.h>
#include <stdlib.h>

int createDecisionTree(int target, int* values);
int climbStairs(int n);


int main()
{
    printf("final result is %d\n", climbStairs(3));

    return 0;
}

int climbStairs(int n)
{
    if(n<=2){return n;}
    int* values = (int*) malloc(sizeof(int)*(n+1));
    for(int i = 0; i < n+1; i++)
    {
        values[i] = -1;
    }
    return createDecisionTree(n, values);
}

int createDecisionTree(int target, int* values)
{
    if(target <= 2)
    {
        return target;
    }

    if(values[target] != -1)
    {
        return values[target];
    }

    values[target] = createDecisionTree(target-1, values) + createDecisionTree(target-2, values);
    return values[target];
}