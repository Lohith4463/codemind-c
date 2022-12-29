#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    printf("0 0 ");
    for(i=0;i<=n-2;i++)
    {
        if(i%2==0)
        {
            a=(a*2)+1;
            printf("%d ",a);
        }
        else
        {
            b=(b*3)+2;
            printf("%d ",b);
        }    
    }
}