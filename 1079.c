#include<stdio.h>
int main ()
{
    int i, n;
    i = 1;
    scanf("%d", &n);

    while (i<=n)
    {
        double a, b, c, d;
        scanf("%lf%lf%lf", &a, &b, &c);
        d = (a*2 + b*3 + c*5) / (2+3+5);
        printf("%.1lf", d);
        i++;
    }
    return 0;
}
