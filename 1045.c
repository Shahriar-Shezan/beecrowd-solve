#include <stdio.h>
int main ()
{
    double a, b, c, A, B, C;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            A = a;
            B = b;
            C = c;
        }
        else
        {
            A = c;
            B = b;
            C = c;
        }
        if ( A >= B+C )
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if (A*A > B*B + C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A*A == B*B + C*C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A*A < B*B + C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ( A == B && B == C && C == A)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ( A == B && B != C || B == C && C != A || C == A && A != B || B == C && C!=A )
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else
    {
        if (b > c)
        {
            A = b;
            B = c;
            C = a;
        }
        else
        {
            A = c;
            B = b;
            C = a;
        }
        if ( A >= B+C )
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if (A*A > B*B + C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (A*A == B*B + C*C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if (A*A < B*B + C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ( A == B && B == C && C == A)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (A == B && B != C || B == C && C != A || C == A && A != B || B == C && C!=A )
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
