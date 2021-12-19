#include<stdio.h>
int main()
{
    int x,y;
    for(;;)
    {
        scanf("%d%d",&x,&y);
        if(x>0 && y>0)
            printf("primeiro\n");
        else if(0>x && y>0)
            printf("segundo\n");
        else if(x>0 && 0>y)
            printf("quarto\n");
        else if(0>x && 0>y)
            printf("terceiro\n");
            else
                break;
    }


    return 0;
}
