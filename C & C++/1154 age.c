#include<stdio.h>
int main()
{
    int n,i,s=0,d=0;
    for(;;)
    {
        scanf("%d",&n);
        if(n<0)
            break;
        else
        {
            s+=n;
            d+=1;
        }

    }
    printf("%.2f\n",(float)s/(float)d);

    return 0;
}
