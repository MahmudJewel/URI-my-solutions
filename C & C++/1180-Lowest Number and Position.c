#include<stdio.h>
#define size 1000
int main()
{
    int ar[size],ar2[size],n,i,j,swape,k=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
        ar2[i]=ar[i];
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ar[j]>ar[j+1])
            {
                swape=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=swape;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(ar[0]==ar2[i])
            break;
        k++;
    }
    printf("Menor valor: %d\n",ar[0]);
    printf("Posicao: %d\n",k);



    return 0;
}
