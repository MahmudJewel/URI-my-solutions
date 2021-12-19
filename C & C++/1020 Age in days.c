#include<stdio.h>
int main()
{
    int n,y,m;
    scanf("%d",&n);
    y=n/365;
    n=n%365;
    m=n/30;
    n=n%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,n);
    return 0;
}

