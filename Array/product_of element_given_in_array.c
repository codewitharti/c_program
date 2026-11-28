#include<stdio.h>
int main()
{
    int n,i,product= 1;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the number that you want to multiply: ");
    for(i= 0;i< n;i++)
  {
     scanf("%d",&arr[i]);
  }
    for(i= 0; i< n; i++)
  {
    product = product*arr[i];
  }
   printf("product of numbers %d ",product);
   return 0;
}
