#include<stdio.h>
int main ()
{
    int i, a, b , p = 1;
    i = 1;
    scanf("%d%d", &a, &b);
    while (i <= b)
    {
        p *=a ;
        i++;
    }
    printf("%d", p);
    return 0;
}
