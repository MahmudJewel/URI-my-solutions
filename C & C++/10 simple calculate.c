#include<stdio.h>
int main()
{
    int a,b;
    float c,d,e,f;
    scanf("%d%f%f\n",&a,&c,&d);
    scanf("%d%f%f",&b,&e,&f);
    printf("VALOR A PAGAR: R$ %.2f",c*d+e*f);

    return 0;
}
