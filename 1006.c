#include<stdio.h>
int main ()
{
    double a, b, c, d;
    scanf("%lf%lf%lf", &a, &b, &c);
    c = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1lf\n", c);
    return 0;
}

