#include<stdio.h>
int main ()
{
    int i, p;
    double n, a, s;
    i = 1;
    p = 0;
    a = 0;
    s = 0;
    while (i <= 6)
    {
        scanf("%lf", &n);
        if (n > 0)
        {
            s += n;
            p++;
        }
        i++;
    }
    a = s / p;
    printf("%d valores positivos\n", p);
    printf("%.1lf\n", a );
    return 0;
}
