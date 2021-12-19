#include<stdio.h>
int main()
{

    float n;
    int h,fi,t,te,fv,tw,a,b,c,d,e,f;
    scanf("%f",&n);
    printf("NOTAS:\n");
    n=n*100;
    h=(int)n/10000;
    n=(int)n%10000;
    fi=(int)n/5000;
    n=(int)n%5000;
    t=(int)n/2000;
    n=(int)n%2000;
    te=(int)n/1000;
    n=(int)n%1000;
    fv=(int)n/500;
    n=(int)n%500;
    tw=(int)n/200;
    n=(int)n%200;
    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n",h,fi,t,te,fv,tw);
    printf("MOEDAS:\n");
    a=(int)n/100;
    n=(int)n%100;
    b=(int)n/50;
    n=(int)n%50;
    c=(int)n/25;
    n=(int)n%25;
    d=(int)n/10;
    n=(int)n%10;
    e=(int)n/5;
    n=(int)n%5;
    f=(int)n/1;
    printf("%d moeda(s) de R$ 1.00\n",a);
    printf("%d moeda(s) de R$ 0.50\n",b);
    printf("%d moeda(s) de R$ 0.25\n",c);
    printf("%d moeda(s) de R$ 0.10\n",d);
    printf("%d moeda(s) de R$ 0.05\n",e);
    printf("%d moeda(s) de R$ 0.01\n",f);


    return 0;
}

