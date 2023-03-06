#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize);

int main()
{

    return 0;
}

int* plusOne(int* digits, int digitsSize, int* returnSize)
{

    *returnSize = digitsSize;
    int carry = 1;
    for(int i = digitsSize-1; i >= 0; i--)
    {
        if((digits[i] == 9))
        {
            digits[i] = 0;
        }
        else
        {
            digits[i] += 1;
            carry = 0;
            break;
        }
    }
    
    if(carry == 1)
    {
        digits = (int*) malloc(sizeof(int)*(digitsSize+1));
        digits[0] = 1;

        for(int i = 1; i<(digitsSize+1); i++)
        {
            digits[i]=0;
        }
        *returnSize = digitsSize+1;
    }

    return digits;
}