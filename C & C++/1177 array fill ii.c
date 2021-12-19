#include<stdio.h>
int main()
{
    int ar[1000],n,i,j=0;
    scanf("%d",&n);
    for(i=0; i<1000; i++)
    {
        ar[i]=j;
        printf("N[%d] = %d\n",i,ar[i]);
        if(j==n-1)
            j=0;
        else
            j++;
    }
    return 0;
}
