#include<stdio.h>
int main()
{
 int n,i;
 printf(" Enter a number :");
 scanf("%d",&n);
    printf(" Multiplication Table of %d \n",n);
    printf("-------------------------------\n");
        for(i=1;i<=10;i++)
            {

                printf("  %d*%d=%d ",n,i,n*i);
                printf("\n");
                }
    printf("-------------------------------");
  return 0;
}
