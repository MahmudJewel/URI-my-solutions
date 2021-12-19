#include<stdio.h>
int main()
{
    float A;
    scanf("%f",&A);
    if(A>=0 && 25>=A)
        printf("Intervalo [0,25]\n");
    else if(A>25 && 50>=A)
        printf("Intervalo (25,50]\n");
    else if(A>50 && 75>=A)
        printf("Intervalo (50,75]\n");
    else if(A>75 && 100>=A)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
    return 0;
}
