#include<stdio.h>
#define size 10000
int main()
{
    int array[size],i,n,num,first,last,mid;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0; i<n; i++)
        scanf("%d",&array[i]);
    printf("Enter a num for checking\n");
    scanf("%d",&num);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(array[mid]==n)
        {
            printf("Found at %d position\n",mid+1);
            break;
        }
        else if(array[mid]<n)
            first=mid+1;
        else
            last=mid-1;
        mid=(first+last)/2;

    }
    if(first>last)
        printf("not Found\n");

    return 0;
}
