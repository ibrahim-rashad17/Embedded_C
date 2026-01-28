#include <stdio.h>

int arr_lnth;

void insert_element(int *arr, int posn, int element, int *n)
{
    for(int i=*n-1;i>=posn;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[posn] = element;

    *n = *n + 1;    //Increment the lnth of array
}

int main()
{
    int arr[10] = {10,20,30,40,38};
    arr_lnth = 5;

    insert_element(arr,2,25,&arr_lnth);
    for(int i=0;i<arr_lnth;i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}