#include<stdio.h>
int main ()
{
    int n,x,y,i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0)
        {
            x+=1;
            for(j=0;j<y;j++)
            {
                s+=x;
                x+=2;
            }
            printf("%d\n",s);
        }
        else
        {
            s=0;
            for(j=0;j<y;j++)
            {
                s+=x;
                x+=2;
            }
            printf("%d\n",s);

        }
    }
    return 0;
}
