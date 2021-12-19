#include<stdio.h>
int main()
{
    int x,y,i,s=0;
    scanf("%d%d",&x,&y);
    for(i=y+1; i<x; i++)
    {
        if(i%2!=0)
            s=s+i;
    }
    printf("%d\n",s);

    return 0;
}
