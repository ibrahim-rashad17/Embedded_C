#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()
{
    char *word = "Hello";
    char str[] = "Hello How Hello are you Hello Ola";\
    int len = strlen(str);

    char tempstr[len];
    char newstr[len];

    int cnt = 0;    
    bool FirstWord = true;
    
    for (int i = 0; i < strlen(str); i++)
    {
        tempstr[cnt++] = str[i];
        if (str[i+1] == ' ' || str[i+1] == '\0')
        {
            tempstr[cnt++] = '\0';
            cnt=0;
            i++;    //Skipping space or NULL char

            if (strcmp(word,tempstr))
            {
                if (FirstWord)
                {
                    FirstWord = false;
                    strcpy(newstr,tempstr);
                    strcat(newstr," ");
                }
                else
                {
                    strcat(newstr,tempstr);
                    strcat(newstr," ");
                }             
            }
            
        }              
    }
    
    printf("New string:%s\n",newstr);
}