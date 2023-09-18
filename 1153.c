#include<stdio.h>
int main ()
{
    int i, n, f;
    i = 1;
    f = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        f*=n;
        n--;
    }
    printf("%d", f);
    return 0;
}
