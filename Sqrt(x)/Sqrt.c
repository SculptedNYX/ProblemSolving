#include <stdio.h>

int main()
{

    return 0;
}

int mySqrt(int x)
{
    if(x <= 0)
    {
        return 0;
    }
    if(x == 1)
    {
        return 1;
    }

    long currentMultiplier = 1;
    long product = 1;

    while(product < x)
    {
        product = currentMultiplier * currentMultiplier;
        currentMultiplier++;
    }

    if(product == x)
    {
        return currentMultiplier - 1;
    }

    return currentMultiplier - 2;
}