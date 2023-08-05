#include<stdio.h>
int main ()
{
    int i, n, s = 0;
    double a;
    i = 1;

    while (i)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            s += n;
            a = (double) s/i;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("%.2lf\n", a);
    return 0;
}
