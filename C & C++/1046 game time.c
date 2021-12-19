#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=b-a;
    if(c<=0)
        printf("O JOGO DUROU %d HORA(S)\n",c+24);
    else
        printf("O JOGO DUROU %d HORA(S)\n",c);

    return 0;
}
