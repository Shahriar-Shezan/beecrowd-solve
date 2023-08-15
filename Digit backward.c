#include<stdio.h>
int main ()
{
    int i, n, d;
    i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        d = n % 10;
        printf("%d ", d);
        n/=10;
        //i++;
    }
    return 0;
}
