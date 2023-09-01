#include <stdio.h>
int main ()
{
    int i, n1, n2, n3, n;
    i = 1;
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("%d %d", n1, n2);
    while (i <= n)
    {
        n3 = n1+n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
        i++;
    }
    return 0;
}
