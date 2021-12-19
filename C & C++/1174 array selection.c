#include<stdio.h>
int main()
{
    int i,n;
    float ar[100];
    for(i=0; i<100; i++)
        scanf("%f",&ar[i]);
    for(i=0; i<100; i++)
    {
        if(ar[i]<=10)
            printf("A[%d] = %.1f\n",i,ar[i]);
    }
    return 0;
}
