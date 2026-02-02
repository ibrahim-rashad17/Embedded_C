#include <stdio.h>

int arr[] = {1,0,2,3,2,0,0,4,5,1};

void swap(int *a, int *b)
{
    if ((a==b) || (*a == *b))
    {
        return;
    }

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void movezeros(int *arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[j] != 0)
        {
            j++;
            continue;
        }

        if ((arr[i] != 0) && (i>j))
        {
            swap(&arr[i],&arr[j++]);
            // j++;
        }
        
        
    }
    
}

void main()
{
    int n = sizeof(arr) / 4;

    movezeros(arr,n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}