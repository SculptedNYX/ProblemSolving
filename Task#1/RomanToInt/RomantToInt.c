#include <stdio.h>
#include <string.h>
#include <ctype.h>

int romanToInt(char * s);
int digitToRomanMap(char c);

int main()
{
    printf("%d" , romanToInt("LVIII"));
    return 0;
}

int digitToRomanMap(char c)
{
    switch (toupper(c))
        {
        case 'I':
            return 1;
            break;
        case 'V':
            return 5;
            break;
        case 'X':
            return 10;
            break;
        case 'L':
            return 50;
            break;
        case 'C':
            return 100;
            break;
        case 'D':
            return 500;
            break;
        case 'M':
            return 1000;
            break;
        default:
            return -1;
            break;
        }
}

int romanToInt(char * s){

    int finalNumber = 0;
    int currnetDigit;
    for(int i = 0; i < strlen(s); i++)
    {
    
        currnetDigit = digitToRomanMap(s[i]);
        if(s[i+1] != '\0' && currnetDigit < digitToRomanMap(s[i+1]))
        {
            finalNumber -= currnetDigit;
        }
        else
        {
            finalNumber += currnetDigit;
        }
    }

    return finalNumber;
}

