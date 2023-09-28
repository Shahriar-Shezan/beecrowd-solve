#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]>a[i])
        {
            f=1;
        }
        else
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("Increasing");
    }
    else
    {
        printf("Not");
    }
    return 0;
}


