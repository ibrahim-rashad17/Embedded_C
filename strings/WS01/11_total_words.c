#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Hello How are you";

    int cnt = 0;    //Any value > 1 can be assigned
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {
            cnt++;
        }       
    }
    
    printf("Total words:%d\n",cnt+1);
}