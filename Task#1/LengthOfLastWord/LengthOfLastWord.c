#include <stdio.h>

int lengthOfLastWord(char * s);

int main()
{
    char* arr = "wewewew yes";
    printf("%d", lengthOfLastWord(arr));
    return 0;
}

int lengthOfLastWord(char * s)
{
    int passedASpace = 0;
    int letterCounter = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
        {
            passedASpace = 1;
        }
        else if(passedASpace == 0)
        {
            letterCounter++;
        }
        else
        {
            letterCounter = 0;
            letterCounter++;
            passedASpace = 0;
        }
    }

    return letterCounter;
}