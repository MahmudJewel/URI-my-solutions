#include<stdio.h>
int main()
{
    float i,j,a=1,b=3;
    for(i=0;i<=2;i+=0.2)
    {
        for(j=a;j<=b;j++)
        printf("I=%.1f J=%.1f\n",i,j);
        a+=0.2;
        b+=0.2;
    }

    return 0;
}

