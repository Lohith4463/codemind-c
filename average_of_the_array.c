#include"stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    float avg;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    float t;
    t=n;
    avg=s/t;
    printf("%.2f",avg);
}