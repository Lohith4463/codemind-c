#include<stdio.h>
int main()
{
	int n,l,sq;
	scanf("%d%d",&n,&l);
	for( int i=1;i<=l;i=i+2)
	{
		sq=n*i;
		printf("%d x %d = %d
",n,i,sq);
	}
}