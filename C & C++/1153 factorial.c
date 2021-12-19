#include<stdio.h>
int main()
{
    long long n,i,a=1;
    scanf("%lld",&n);
    for(i=n;i>=1;i--)
    {
        a=a*i;
    }
    printf("%lld\n",a);

    return 0;
}
