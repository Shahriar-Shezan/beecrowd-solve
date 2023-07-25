#include<stdio.h>
int main ()
{
    int n, n100, n50, n20, n10, n5, n2, n1;
    scanf("%d", &n);
    printf("%d\n", n);
    n100 = n / 100;
    n = n % 100;
    n50 = n / 50;
    n = n % 50;
    n20 = n / 20;
    n = n % 20;
    n10 = n / 10;
    n = n % 10;
    n5 = n / 5;
    n = n % 5;
    n2 = n / 2;
    n = n % 2;
    n1 = n / 1;

    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}
