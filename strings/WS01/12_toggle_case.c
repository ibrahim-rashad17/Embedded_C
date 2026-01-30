#include <stdio.h>
#include <string.h>

//if small letter, add 32, if cap letter subtract 32, hence we can toggle the bit 5 corresponding to 32

void main()
{
    char str[] = "Hello How are you";
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ')
        {
            str[i] ^= (1 << 5); 
        }
        
    }
    
    printf("Toggled version:%s\n",str);
}