#include<stdio.h>
int main()
{
int a[15],i,sum=0;
float avg;
 printf("enter that fifteen numbers : ");
for (i =1;i<= 15;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=15;i++)
        {
            sum= sum+i;
        }
        avg = sum/15.0;
        printf("the average of given number is %f ",avg);
        return 0;
    }
