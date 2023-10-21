#include<stdio.h>
int main()
{
    int T,S,B,c;
    scanf("%d%d%d",&T,&S,&B);
    c=(2*T*S*B*512)/1024;
    printf("%d KB",c);
}