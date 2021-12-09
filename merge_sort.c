#include <stdio.h>
void merge_sort(int arr1[], int arr2[], int size1 , int size2);
int main()
{
    int arr1[50], arr2[50],i,j,arr1size, arr2size;
    printf("enter size of array 1:\n");
    scanf("%d",&arr1size);
    printf("enter array 1 elements\n");
    for(i=0; i < arr1size; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of array 2:\n");
    scanf("%d",&arr2size);
    printf("enter array 2 elements\n");

    for(i = 0; i<arr2size; i++)
    {
        scanf("%d",&arr2[i]);
    }
    merge_sort(arr1,arr2,arr1size,arr2size);
    return 0;
}
void merge_sort(int arr1[], int arr2[], int size1 , int size2)
{
    int i , j,k, arr3[100];
    for(i = 0, j = 0; i < size1 && j< size2 ; )
    {
        if(arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            k++ , i++;

        }
        else
        {
            arr3[k] = arr2[j];
            k++ , j++;
        }
    }
    if(i < size1)
    {
        while(i < size1)
        {
            arr3[ k ] = arr1[i];
            k++ , i++;
        }
    }
    if(j < size2)
    {
        while(j < size2)
        {
            arr3[ k ] = arr2[j];
            k++ , j++;
        }
    }
    for(i= 0; i < size1+size2 ; i++)
    {
        printf("%d\t",arr3[i]);
    }
}
