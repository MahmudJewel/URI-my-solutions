#include<stdio.h>
#define pi 3.14159
int main()
{
    double A,B,C,rt,rc,t,s,r;
    scanf("%lf%lf%lf",&A,&B,&C);
    rt=(A*C)/2;
    rc=pi*C*C;
    t=(A+B)*C/2;
    s=B*B;
    r=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",rt,rc,t,s,r);

    return 0;
}
