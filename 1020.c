#include<stdio.h>
int main ()
{
    int n, a;
    scanf("%d", &n);
    a = n / 365;
    printf("%d ano(s)\n", a);
    n = n % 365;
    a = n / 30;
    printf("%d mes(es)\n", a);
    a = n % 30;
    printf("%d dia(s)\n", a);
    return 0;
}
