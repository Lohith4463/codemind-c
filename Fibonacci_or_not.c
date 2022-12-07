#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    scanf("%d",&n);
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    printf("True");
    else
    printf("False");
}