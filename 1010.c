#include<stdio.h>
int main ()
{
    int a, b, c, d;
    double o, p, s;
    scanf("%d%d%lf%d%d%lf", &a, &b, &o, &c, &d, &p);
    s = (b * o) + (d * p);
    printf("VALOR A PAGAR: R$ %.2lf\n", s);
    return 0;
}
