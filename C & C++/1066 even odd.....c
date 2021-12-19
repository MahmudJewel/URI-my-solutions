#include<stdio.h>
int main()
{
    int i,n,e=0,o=0,p=0,ne=0;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            e=e+1;
        if(n%2!=0)
            o=o+1;
        if(n>0)
            p=p+1;
        if(n<0)
            ne=ne+1;

    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",ne);


    return 0;
}

