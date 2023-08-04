#include<stdio.h>
int main ()
{
    int i, e, n;
    i = 1;
    e = 0;

    while (i <= 5)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            e++;
        }
        i++;
    }
    printf("%d valores pares\n", e);
    return 0;
}
