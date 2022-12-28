#include<stdio.h>
#include<math.h>
int main ()
{
	int n,t,r1,r2,sq,rev1=0,rev2=0;
	scanf("%d",&n);
	t=n*n;
	while(t!=0)
	{
		r1=t%10;
		rev1=rev1*10+r1;
		t=t/10;
	}
	sq=sqrt(rev1);
   	while(sq!=0)
	{
		r2=sq%10;
		rev2=rev2*10+r2;
		sq=sq/10;
	}
	if(rev2==n)
	printf("True");
	else
	printf("False");
	return 0;
}