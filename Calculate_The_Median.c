#include<stdio.h>
int main(){
	int n,i,j,y,k;
	scanf("%d",&n);
	int x[n];
	int t;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	printf("%d",x[n/2]);
}