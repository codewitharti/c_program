#include<stdio.h>
int main()
{
    int i,a[10],sum=0;
    printf("enter ten  numbers : ");

       for(i=0;i<10;i++)
   {
        scanf("%d",&a[i]);

    }
        for(i=0;i<10;i++)
   {

    sum = sum + a[i];
   }
        printf("total sum of given number is %d",sum);

        return 0;
}
