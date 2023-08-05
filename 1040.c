#include <stdio.h>
int main ()
{
    double a, b, c, d, e;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    e = (a*2 + b*3 + c*4 + d*1) / (1+2+3+4);
    printf("Media: %.1lf\n", e);
    if ( e >= 7.0 )
    {
        printf("Aluno aprovado.\n");
    }
    if (e < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if (e >= 5.0 && e <= 6.9)
    {
        printf("Aluno em exame.\n");
        double f, g;
        scanf("%lf", &f);
        printf("Nota do exame: %.1lf\n", f);
        g = (e + f) / 2.0;

        if (g >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno aprovado.\n");
        }
        printf("Media final: %.1lf\n", g);
    }
    return 0;
}

