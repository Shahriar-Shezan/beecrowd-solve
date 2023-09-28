#include<stdio.h>
int main ()
{
    int a[10000],d[10000];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        d[i-1]=a[i]-a[i-1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}

