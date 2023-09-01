#include <stdio.h>
int main ()
{
    int i, n1, n2, n3, n;
    i = 1;
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("%d %d", n1, n2);
    n3 = n1+n2;
    while (n3 <= n)
    {
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1+n2;
    }
    return 0;
}
