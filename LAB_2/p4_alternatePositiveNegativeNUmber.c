#include <stdio.h>

int main()
{
    int n;
    printf("enter number of element:");
scanf("%d",&n);
int arr[n];
printf("enter the elements of array:");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("numbers are:\n");

int arr1[n],arr2[n];
int j=0,k=0;

for(int i=0;i<n;i++){
   if(arr[i]>=0){
       arr1[j]=arr[i];
       j++;
   }
   else{
       arr2[k]=arr[i];
       k++;
   }



}
int m=0,p=0;
for(int i=0;i<n;i++){
    if(i%2==0 && m<j){
        printf("%d ",arr1[m]);
        m++;
    }
    else if(p<k){
        printf("%d ",arr2[p]);
        p++;
    }
}
return 0;
}