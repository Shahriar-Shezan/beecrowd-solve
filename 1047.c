#include <stdio.h>
int main ()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a == c)
    {
        if (b == d)
        {
           printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
        else if (b > d)
        {
            printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", 60-b+d);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a, d-b);
        }
    }
    else if (a > c)
    {
        if (b == d)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, d-b);
        }
        else if (b > d)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, 60-b+d);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24-a+c, d-b);
        }
    }
    else if ( a < c)
    {
        if (b == d)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a, d-b);
        }

        else if (b > d)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a, 60-b+d);
        }
        else
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c-a, d-b);
        }
    }
    return 0;
}
