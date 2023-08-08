#include<stdio.h>
int main ()
{
    int i, j;
    i=1;
    j=7;
    while (i <= 9)
    {
       while (5 <= j)
       {
           printf("I=%d J=%d\n", i, j);
           j--;
       }
       j+=3;
       i+=2;
    }
    return 0;
}
