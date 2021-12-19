#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    switch(X)
    {
    case 1:
        printf("Total: R$ %.2f\n",4*(float)Y);
        break;
    case 2:
        printf("Total: R$ %.2f\n",4.50*(float)Y);
        break;
    case 3:
        printf("Total: R$ %.2f\n",5*(float)Y);
        break;
    case 4:
        printf("Total: R$ %.2f\n",2*(float)Y);
        break;
    case 5:
        printf("Total: R$ %.2f\n",1.50*(float)Y);
        break;

    }


    return 0;
}

