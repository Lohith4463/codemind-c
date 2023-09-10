#include<stdio.h>
int linsec(int *a,int n,int i,int k){
    if(i<n){
        if(a[i]==k)
            return i;
        else
            return linsec(a,n,i+1,k);
    }
    return -1;
}
int main()
{
    int n,c=0,f;
    scanf("%d",&n);
    int i,a[n],k;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        scanf("%d",&k);
        f=linsec(a,n,0,k);
    }
    if(f==-1)
        printf("False");
    else
        printf("True");
}