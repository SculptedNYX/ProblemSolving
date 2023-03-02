#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x);

int main()
{
    printf("%d", isPalindrome(122));
    return 0;
}

bool isPalindrome(int x){

    if(x < 0)
    {
        return false;
    }

    long reverse = 0;
    int dummyNumber = x;

    while (dummyNumber != 0)
    {
        reverse = (reverse*10) + (dummyNumber%10);
        dummyNumber = dummyNumber/10;
    }

    if(x == reverse)
    {
        return true;
    }

    return false;
    
}