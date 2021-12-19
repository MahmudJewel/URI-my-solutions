#include<stdio.h>
int main()
{
    double A,B,C,d;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(B>A && B>C)
        d=A, A=B, B=d;
    else if (C>A && C>B)
        d=A, A=C, C=d;
    else
        A=A;
    if(A >= B + C)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if( A*A == (B*B + C*C) )
            printf("TRIANGULO RETANGULO\n");
        if(  A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if( A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B && A==C )
            printf("TRIANGULO EQUILATERO\n");
        if((A==B && C!=A) || (A==C && B!=A) || (C==B && A!=C) )
            printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
