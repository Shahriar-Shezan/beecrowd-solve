#include<stdio.h>
int main ()
{
    int i,j,k;
    for(i=1;i<=9;i+=2)
    {
        j=i+6;
        k=i+4;
        for(;j>=k;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
    return 0;
}
