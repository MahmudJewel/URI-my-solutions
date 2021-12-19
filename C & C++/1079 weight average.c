#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        printf("%.1f\n",(2*a+3*b+5*c)/10);
    }

    return 0;
}
