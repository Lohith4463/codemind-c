#include<stdio.h>
int main()
{
    int r,s=0,n;
    scanf("%d",&n);
    int temp;
    temp=n;
    while (temp!=0)
    {
        r=temp%10;
        s=s*10+r;
        temp=temp/10;
    }
    printf("%d",s);
}