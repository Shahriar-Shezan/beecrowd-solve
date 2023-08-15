#include<stdio.h>
int main ()
{
    int i, n, a, b;
    i = 1;
    b = 0;
    scanf("%d", &n);
    while ( n > 0)
    {
        a = n % 2;
        n = n / 2;
        b += a*i;
        i*=10;
    }
    printf("%d", b);
    return 0;
}
