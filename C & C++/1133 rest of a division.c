#include<stdio.h>
int main()
{
    long long x,y,i,a;
    scanf("%lld%lld",&x,&y);
    if(y>x)
    {
        for(i=x+1; i<y; i++)
        {
            a=0;
            if(i%5==2 || i%5==3)
                a=1;
            if(a==1)
                printf("%lld\n",i);
        }
    }
    else
    {
        for(i=y+1; i<x; i++)
        {
            a=0;
            if(i%5==2 || i%5==3)
                a=1;
            if(a==1)
                printf("%lld\n",i);
        }
    }


    return 0;
}
