#include<stdio.h>
int main()
{
    int c,s,t,b,tc;
    scanf("%d%d%d",&s,&t,&b);
    c=2*s*t*b*512;
    tc=c/1024;
    printf("%dKB",tc);
}