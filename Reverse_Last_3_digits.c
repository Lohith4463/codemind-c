#include<stdio.h>
int main()
{
    int n,r,rev=0,c=0;
    scanf("%d",&n);
    int t=n;
    int m=t-(t%1000);
    while(n!=0)
    {
        c++;
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        if(c==3)
        {
            break;
        }
    }
    printf("%d",rev+m);
}