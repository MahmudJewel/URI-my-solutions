#include<stdio.h>
int main()
{
    long long x,y,i,sum=0,a;
    scanf("%lld%lld",&x,&y);
    if(y>x){
    for(i=x; i<=y; i++)
    {
        a=0;
        if(i%13!=0)
            a=1;
        if(a==1)
            sum+=i;
    }}
    else
    {
        for(i=y; i<=x; i++)
    {
        a=0;
        if(i%13!=0)
            a=1;
        if(a==1)
            sum+=i;
    }
    }
    printf("%lld\n",sum);

    return 0;
}
