#include<stdio.h>
int main()
{
    int n,i,m,j,sum=0;
    scanf("%d%d",&n,&m);
    for(i=1; i<=m; i++)
    {
        if(i-n==0 || i-n==n){
            printf("%d\n",i);
        }
        else
        printf("%d ",i);
    }
    return 0;
}

