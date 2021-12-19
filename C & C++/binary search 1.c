#include<stdio.h>
#define size 100
int main()
{
    int array[size],i,first,last,mid,check,n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);
    printf("Enter a num for checking\n");
    scanf("%d",&check);
    first=0;
    last=check-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(array[mid]==check)
        {
            printf("Found at %d position\n",mid+1);
            break;
        }
        else if(array[mid]>check)
            last=mid-1;
        else
            first=mid+1;
        mid=(first+last)/2;

    }
    if(last<first)
        printf("Not found\n");

    return 0;
}
