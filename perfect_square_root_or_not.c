#include<stdio.h>
int perf(int num)
{
    int i;
    for(i=1;i*i<=num;i++){
        if(num%i==0 && num/i==i){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    if(perf(n)){
        printf("True");
    }
    else{
        printf("False");
    }
}