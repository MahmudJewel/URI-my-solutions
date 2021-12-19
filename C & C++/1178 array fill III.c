#include<stdio.h>
int main()
{
    int i;
    double ar[100],n;
    scanf("%lf",&n);
    for(i=0; i<100; i++)
    {
        ar[i]=n;
        printf("N[%d] = %.4lf\n",i,ar[i]);
        n=n/2;
    }

    return 0;
}
