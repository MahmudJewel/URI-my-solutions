#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,A,B,C;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    A=(2*N1+3*N2+4*N3+N4)/10;
    printf("Media: %.1f\n",A);
    if(A>=7)
        printf("Aluno aprovado.\n");
    else if(5>A)
        printf("Aluno reprovado.\n");
    else if(6.9>=A && A>=5)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%lf",&B);
        C=(A+B)/2;
        if(C>=5)
            printf("Aluno aprovado.\n");
        else if(4.9>=C)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",C);
    }
    return 0;
}
