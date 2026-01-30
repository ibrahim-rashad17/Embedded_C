#include <stdio.h>
#include <string.h>

int IsStringPalindrome(char *str)
{
    int len = strlen(str);

    for (int i = 0; i < (len/2); i++)
    {
        if (str[i] != str[len-i-1])
        {
            return 0;
        } 
    }
    return 1;
}

void main()
{
    char str[] = "abcbab";

    if (IsStringPalindrome(str))
    {
        printf("palindrome\r\n");
    }
    else
    {
        printf("Not palindrome\r\n");
    }
    
}