#include<stdio.h>
int main()
{
    int i,sum=0;
    float a;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&a);
        if(a>0)
            sum=sum+1;
    }
    printf("%d valores positivos\n",sum);

    return 0;
}

