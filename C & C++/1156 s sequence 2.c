#include<stdio.h>
int main()
{
    float i,s=1,j=1;
    for(i=3; i<=39; i+=2)
    {
        j=2*j;
        s=s+i/j;
    }
    printf("%.2f\n",s);

    return 0;
}


