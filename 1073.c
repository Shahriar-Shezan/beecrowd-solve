#include<stdio.h>
#include<math.h>
int main ()
{
    int i, n, p;
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            p = pow (i, 2);
            printf("%d^2 = %d\n", i, p);
        }
        i++;
    }
    return 0;
}
