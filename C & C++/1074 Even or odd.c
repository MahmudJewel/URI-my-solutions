#include<stdio.h>
int main()
{
    int n,a,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a);
        if(a>0 && a%2==0)
            printf("EVEN POSITIVE\n");
        else if(a<0 && a%2==0)
            printf("EVEN NEGATIVE\n");
        else if(a<0 && a%2!=0)
            printf("ODD NEGATIVE\n");
        else if(a>0 && a%2!=0)
            printf("ODD POSITIVE\n");
        else
            printf("NULL\n");
    }


    return 0;
}
