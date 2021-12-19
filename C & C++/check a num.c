#include<stdio.h>
#define size 10000
int main()
{
    int array[size],i,n,c=1,j,m;
    printf("Enter the array size\n");
    scanf("%d",&m);
    printf("Enter the element\n");
    for(i=0; i<m; i++)
        scanf("%d",&array[i]);
    printf("Enter a num for checking\n");
    scanf("%d",&n);
    for(i=0; i<m; i++)
    {
        if(array[i]==n)
        {
            c=0;
            j=i;
        }

    }
    if(c==0)
        printf("Found at location %d\n",j+1);
    else
        printf("not Found\n");


    return 0;
}
