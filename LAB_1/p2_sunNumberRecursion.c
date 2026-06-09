#include <stdio.h>
#include<time.h>


int sum(int n){
    if(n==0) return 0;

   return n+sum(n-1);
}

int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

  printf("%d",sum(2));
    
    return 0;
}