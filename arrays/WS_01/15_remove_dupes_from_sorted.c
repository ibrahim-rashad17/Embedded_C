#include <stdio.h>

int arr[] = {2,2,3,4,5,5,6,7,7};

int removeDupes(int *arr, int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != arr[j])
        {
            arr[++j] = arr[i];
        }
    }
    return (j+1);   //Length of new array
}

void main()
{
    int n = removeDupes(arr,sizeof(arr)/4);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}