#include <stdio.h>
#include <string.h>

int hash[255];  //Considering First 255 Unicode
void main()
{
    char str[] = "Hello";

    int lowest = 10;    //Any value > 1 can be assigned
    
    for (int i = 0; i < strlen(str); i++)
    {
        hash[str[i]]++;
        if (hash[str[i]] < lowest)
        {
            lowest = hash[str[i]];
        }      
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (hash[str[i]] == lowest)
        {
            printf("%c %d times\n",str[i],lowest);
        }      
    }
    
}