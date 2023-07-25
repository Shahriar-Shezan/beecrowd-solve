#include <stdio.h>
int main ()
{
    double a, b, c, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    if ( (a+b) > c && (b+c) > a && (a+c) > b)
    {
        d = a + b + c;
        printf("Perimetro = %.1lf\n", d);
    }
    else
    {
        d = (a + b) * c / 2;
        printf("Area = %.1lf\n", d);
    }
    return 0;
}
