#include<stdio.h>
int main ()
{
    double a, b, c, d, e, f;
    int x = 0;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);
    if ( a > 0)
    {
        x++;
    }
    if (b > 0)
    {
        x++;
    }
    if ( c > 0)
    {
        x++;
    }
    if ( d > 0)
    {
        x++;
    }
    if ( e > 0)
    {
        x++;
    }
    if ( f > 0)
    {
        x++;
    }
    printf("%d valores positivos", x);
    return 0;
}
