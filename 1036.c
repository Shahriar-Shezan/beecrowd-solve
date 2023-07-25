#include <stdio.h>
#include <math.h>
int main ()
{
    double a, b, c, d, e;
    scanf("%lf%lf%lf", &a, &b, &c);
    if ( sqrt( pow(b,2) - (4*a*c)) >= 0 && a > 0)
    {
        d =  (- b + sqrt( pow(b,2) - (4*a*c))) / (2*a);
        printf("R1 = %.5lf\n", d);

        e =  (- b - sqrt( pow(b,2) - (4*a*c))) / (2*a);
        printf("R2 = %.5lf\n", e);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
