#include<stdio.h>
#include<math.h>
int main ()
{
    double a, b, c, d, e;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    d = sqrt((c - a) * (c - a) + (d - b) * (d - b) );
    printf("%.4lf\n", d);
    return 0;
}
