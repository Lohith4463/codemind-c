#include<stdio.h>
int main()
{
    int n,m,s,d;
    scanf("%d%d",&n,&m);
    s=n+m;
    d=n-m;
    printf("%d %d
",s,d);
    float a,b,s1,s2;
    scanf("%f%f",&a,&b);
    s1=a+b;
    s2=a-b;
    printf("%.1f %.1f",s1,s2);
}