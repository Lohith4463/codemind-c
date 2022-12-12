#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(m==a[i])
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}