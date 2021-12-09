#include<stdio.h>
void selection_sort(int arr[] , int size);
int main()
{
    int arr[50], i, size;
    printf("enter size of the array:");
    scanf("%d" , &size);
    for(i = 0 ; i < size ; i++)
    {
        printf("enter %d number:", i+1);
        scanf("%d" , &arr[i]);
    }
    selection_sort(arr , size);
    return 0;
}
void selection_sort(int arr[] , int n)
{
    int i , j , temp , min;
    for(i = 0; i< n-1; i++)
    {
        min = i;
        for(j = i+1 ; j < n ; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j ;
            }
        }
        if(min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min]= temp;
        }
    }
    for(i= 0; i<n ;i++)
    {
        printf("\n%d\t",arr[i]);
    }
}
