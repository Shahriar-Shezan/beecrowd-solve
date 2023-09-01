#include <stdio.h>
#include <math.h>
int main ()
{
    int n, i, a, d;
    i = 0;
    d = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        a = n % 10;
        n = n / 10;
        a*= pow(2, i);
        d+= a;
        i++;
    }
    printf("%d", d);
    return 0;
}
