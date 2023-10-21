#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float loss,lp;
    loss=X-Y;
    lp=(loss/X)*100.0;
    printf("%.2f",lp);
}