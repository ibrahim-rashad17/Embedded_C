#include <stdio.h>

#define MAX_NUM 50

int arr[] = {2,3,2,4,3,5};

int hash[MAX_NUM];  //Assuming largest elemnt < 50 (can use another method without restriction but its O(n*n))

//Another way can be, we can sort array then just iterate through it once
void main()
{
    int n = sizeof(arr) / 4;

    int new_arr[n];
    int lnth = 0;
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] < 1)
        {
            hash[arr[i]]++;
            new_arr[j++] = arr[i];
            lnth++;
        }       
    }

    for (int i = 0; i < lnth; i++)
    {
        printf("%d\t",new_arr[i]);
    }     
}