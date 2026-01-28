#include <stdio.h>

int arr_lnth;

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sort_descending(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
           if (arr[j] < arr[j+1])
           {
                // swap(&arr[i], &arr[i+1]);
                    int temp;

                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
           }          
        }       
    }   
}

int main()
{
    int arr[10] = {10,20,4,7,38};
    arr_lnth = 5;

    sort_descending(arr,5);
    for(int i=0;i<arr_lnth;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}