#include<stdio.h>
int main()
{
    int i,n,swape;
    int a[20];
    for(i=0; i<20; i++)
        scanf("%d",&a[i]);
    for(i=0; i<20/2; i++)
    {
        swape=a[i];
        a[i]=a[19-i];
        a[19-i]=swape;
    }
    for(i=0; i<20; i++)
    printf("N[%d] = %d\n",i,a[i]);

    return 0;
}

