#include<stdio.h>
int main()
{
    unsigned int n,a=0,g=0,d=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==4)
            break;
        if(n==1)
            a+=1;
        else if(n==2)
            g+=1;
        else if(n==3)
            d+=1;

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);


    return 0;
}
