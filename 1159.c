#include<stdio.h>
int main ()
{
    int x,i,j,s;
    for(;;)
    {
        scanf("%d",&x);
        if(x!=0)
        {
            if(x%2==0)
            {
                s=0;
                for(j=0;j<5;j++)
                {
                    s+=x;
                    x+=2;
                }
                printf("%d",s);
            }
            else
            {
                x+=1;
                s=0;
                for(j=0;j<5;j++)
                {
                    s+=x;
                    x+=2;
                }
                printf("%d",s);
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
