#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d%d%d",&a,&b,&s);
    if(a>b && a>s)
        printf("%d eh o maior\n",a);
    else if(b>a && b>s)
        printf("%d eh o maior\n",b);
    else
        printf("%d eh o maior\n",s);




    return 0;
}
