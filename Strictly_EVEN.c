#include<stdio.h>
int main()
{
    int i,n,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            if(i%2==0)
            {
                t=1;
            }
            else
            {
                t=0;
            }
        }
    }
    if(t==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}