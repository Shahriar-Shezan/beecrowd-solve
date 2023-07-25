#include <stdio.h>
int main ()
{
    int x, y;
    scanf("%d%d", &x, &y);
    if (x == 1 && y >=0 )
    {
        double a = 4.00 * y;
        printf("Total: R$ %.2lf\n", a);
    }
    else if (x == 2 && y >=0)
    {
        double a = 4.50 * y;
        printf("Total: R$ %.2lf\n", a);
    }
    else if (x == 3 && y >=0)
    {
        double a = 5.00 * y;
        printf("Total: R$ %.2lf\n", a);
    }
    else if (x == 4 && y >=0)
    {
        double a = 2.00 * y;
        printf("Total: R$ %.2lf\n", a);
    }
    else if (x == 5 && y >=0)
    {
        double a = 1.50 * y;
        printf("Total: R$ %.2lf\n", a);
    }
    return 0;
}
