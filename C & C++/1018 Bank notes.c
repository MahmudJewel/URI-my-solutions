#include<stdio.h>
int main()
{
    int n,h,fi,t,te,fv,tw;
    scanf("%d",&n);
    printf("%d\n",n);

    h=n/100;
    n=n%100;
    fi=n/50;
    n=n%50;
    t=n/20;
    n=n%20;
    te=n/10;
    n=n%10;
    fv=n/5;
    n=n%5;
    tw=n/2;
    n=n%2;
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",h,fi,t,te,fv,tw,n);
    return 0;
}
