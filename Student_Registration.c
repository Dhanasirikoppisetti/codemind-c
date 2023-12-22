#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c,m,k;
        scanf("%d%d%d ",&c,&m,&k);
        {
            if((m-k)>=c)
            {
                printf("YES
");
            }
            else
            {
                printf("NO
");
            }
        }
    }
}