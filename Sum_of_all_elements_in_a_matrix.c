#include<stdio.h>
int main(){
    int n,m,a[20][20],s=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            s=s+a[i][j];
        }
    }
    printf("%d",s);
}