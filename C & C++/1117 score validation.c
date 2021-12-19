#include<stdio.h>
int main()
{
    float x,y,a,b;
    while(1)
    {
        scanf("%f",&x);
        if(x>10 || 0>x )
            printf("nota invalida\n");
        else
            a=x;
        continue;

        scanf("%f",&y);
        if(y>10 || 0>y )
            printf("nota invalida\n");
        else
            b=y;
        break;
    }
    printf("media = %.2f\n",(a+b)/2);
    return 0;
}

