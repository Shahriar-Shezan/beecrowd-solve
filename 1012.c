#include<stdio.h>
int main ()
{
    double a, b, c, d, e, f, g, h;
    double const pi = 3.14159;
    scanf("%lf%lf%lf", &a, &b, &c);
    d = 0.5 * a * c;
    e = pi * c * c;
    f = 0.5 * (a + b) * c;
    g = b * b;
    h = a * b;
    printf("TRIANGULO: %.3lf\n", d);
    printf("CIRCULO: %.3lf\n", e);
    printf("TRAPEZIO: %.3lf\n", f);
    printf("QUADRADO: %.3lf\n", g);
    printf("RETANGULO: %.3lf\n", h);
    return 0;
}
