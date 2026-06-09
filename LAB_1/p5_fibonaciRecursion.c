#include <stdio.h>

int febonaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return febonaci(n-1)+febonaci(n-2);
}

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("%d",febonaci(n));
    return 0;
}