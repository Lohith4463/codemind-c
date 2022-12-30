#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int n=strlen(str);
    char a=str[n-1];
    char b=str[0];
    str[0]=a;
    str[n-1]=b;
    for(int i=0;i<n;i++)
    {
        printf("%c",str[i]);
    }
}