#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],min=1000,max=-1000,c=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(a[i]==c)
        {
            if(min>a[i])
            {
                min=a[i];
            }
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    if(min!=1000&&max!=1000)
    {
        printf("%d %d",min,max);
    }
    else
    {
        printf("-1");
    }
}