#include <stdio.h>

int digitCount(int n){
    if(n==0) return 0;

    return 1+digitCount(n/10);
}

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    printf("%d",digitCount(n));
}