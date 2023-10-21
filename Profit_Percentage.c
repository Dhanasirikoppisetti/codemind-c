#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float profit,pp;
    profit=Y-X;
    pp=(profit/X)*100;
    printf("%.2f",pp);
}