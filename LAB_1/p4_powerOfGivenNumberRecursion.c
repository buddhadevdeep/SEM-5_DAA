#include <stdio.h>

int power1(int base,int power){
    if(power==0) return 1;

    return base*power1(base,power-1);
}

int main()
{
    int base,power;
    printf("enter base:");
    scanf("%d",&base);

    printf("enter power:");
    scanf("%d",&power);

    int result = power1(base,power);
    printf("Result: %d", result);
    return 0;
}