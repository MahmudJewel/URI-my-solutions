#include<stdio.h>
int main()
{
    float i,s=1;
    for(i=2;i<=100;i++)
    {
        s=s+1/i;
    }
    printf("%.2f\n",s);

    return 0;
}

