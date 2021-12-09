#include <stdio.h>
void count_sort(int arr[],int size);
int main()
{
    int arr[50],i ,size;
    printf("enter the size of the array:\n");
    scanf("%d",&size);
    printf("%d",size);
    printf("enter the array elements\n");
    for(i = 0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("hi");
    count_sort(arr , size);
    printf("array is going to be sorted\n");
    return 0;
}


void count_sort(int arr[], int size)
{
    int max , i , count[20] = {0}, result[20];
    max = arr[0];
    printf("hi111");
    for(i = 1; i<size ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    for(i = 0; i < size ; i++)
    {
        ++count[arr[i]];
    }
    /*for(i = 1 ; i <= max ; i++)
    {
        count[i] = count[i-1] + count[i];
    }
    for(i = size-1 ; i >=0 ; i++)
    {
        result[--count[arr[i]]] = arr[i];
    }
    for(i = 0 ; i < size ; i++)
    {
        arr[i] = result[i];
    }*/
    printf("array is sorted\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("%d\t", arr[i]);
    }


}
