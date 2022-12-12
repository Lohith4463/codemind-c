#include<stdio.h>
int main()
{
    int n,avg;
    scanf("%d",&n);
    int a[n],i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    avg=n/2;
    if(a[i]<=avg)
    {
        printf("True");
    }    
   else
   {
        printf("False");
   }
}