#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n],i,avg,c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
}