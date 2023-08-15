#include<stdio.h>
int main ()
{
    int i, n, d, c = 0;
    i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        d = n % 10;
        if (d == 4 || d == 7)
        {
            c++;
        }
        n/=10;
    }
    if (c > 0)
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
