
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50],i,j,n;
    printf("enter size of array:");
    scanf("%d",&n);
    for(i=0; i < n ; i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0 ; i < n ; i++)
    {
        printf("\t%d\t",arr[i]);
    }
    return 0;
}
