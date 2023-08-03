#include<stdio.h>
int main ()
{
    int i, p, n, e, o;
    i = 1;
    p = 0;
    n = 0;
    e = 0;
    o = 0;
    while ( i <= 5)
    {
        int a;
        scanf("%d", &a);
        if (a > 0)
        {
            p++;
        }
        if (a < 0)
        {
            n++;
        }
        if (a % 2 == 0 || a == 0)
        {
            e++;
        }
        if (a % 2 != 0)
        {
            o++;
        }

       i++;
    }
    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);
    return 0;
}
