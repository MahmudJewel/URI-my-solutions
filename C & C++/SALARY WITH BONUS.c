#include<stdio.h>
int main()
{
    char c[20];
    double a,b;
    scanf("%s",c);
    scanf("%lf",&a);
    scanf("%lf",&b);
    printf("TOTAL = R$ %.2lf",(a+.15*b));
    return 0;
}
