#include<stdio.h>
int main ()
{
    double a, b, c, d;
    scanf("%lf", &a);
    if (a <= 2000)
    {
        printf("Isento\n");
    }
    else if ( a > 2000 && a <= 3000)
    {
        b = (a - 2000)*.08;
        printf ("R$ %.2lf\n", b);
    }
    else if (a > 3000 && a <=4500)
    {
        c = (a - 3000)*.18 + 1000*.08;
        printf ("R$ %.2lf\n", c);
    }
    else if (a > 4500)
    {
        d = (a-4500)*.28 + 1500*.18 + 1000*.08;
        printf ("R$ %.2lf\n", d);
    }
    return 0;
}
