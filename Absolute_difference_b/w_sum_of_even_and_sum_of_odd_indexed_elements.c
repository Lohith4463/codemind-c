#include<stdio.h>
#include<math.h>
int main()
{
    int n,esum=0,osum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        esum=esum+a[i];
        else
        osum=osum+a[i];
    }
    printf("%d",abs(osum-esum));
}