#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);

    if(a>0 && 2000>=a)
        printf("Isento\n");

    else if(a>=2000.01 && 3000>=a)
        printf("R$ %.2f\n",(a-2000)*.08);
    else if(a>=3000.01 && 4500>=a)
        printf("R$ %.2f\n",(a-2000)*.18);
    else
        printf("R$ %.2f\n",(a-2000)*.28);

    return 0;
}
