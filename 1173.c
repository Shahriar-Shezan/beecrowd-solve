#include<stdio.h>
int main ()
{
    int a[10];
    int n,i;
    scanf("%d",&n);
    a[0]=n;
    for(i=1;i<10;i++)
    {
        a[i]=a[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    
    return 0;
}
