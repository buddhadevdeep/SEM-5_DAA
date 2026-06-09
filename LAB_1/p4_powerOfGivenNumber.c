#include <stdio.h>

int main()
{
    int base,power;
    printf("enter base:");
    scanf("%d",&base);

    printf("enter power:");
    scanf("%d",&power);

    int result=1;

    for(int i=1;i<=power;i++){
        result*=base;
    }
    printf("%d",result);
    return 0;
}