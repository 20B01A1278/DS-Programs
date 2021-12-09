
#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int arr[], int n);
int main()
{
    int arr[50],i,n;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i=0; i < n ; i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    return 0;
}
void insertion_sort(int arr[] , int n)
{
    int i, j ,key ;
    for(i = 1 ; i < n ; i++)
    {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] >= key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("array is sorted\n");
    for(j = 0 ; j< n ; j++ )
    {
        printf("%d\t", arr[j]);
    }
}
