#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b)
        printf("Perimetro = %.1f",a+b+c);
    else
        printf("Area = %.1f",(a+b)*c/2);

    return 0;
}
