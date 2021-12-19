#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=a; j<b+3; j++)
            printf("%d ",j);
        printf("PUM\n");
        a+=4;
        b+=4;
    }

    return 0;
}
