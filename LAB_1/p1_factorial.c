#include<stdio.h>
#include<time.h>

int main(){

    clock_t start=clock();
    printf("enter number:");
    int n;
    scanf("%d",&n);

    int fact=1;

    for(int i=1;i<=n;i++){
        fact *=i;
    }
    clock_t end=clock();
    double time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_spent);

    printf("%d",fact);
}