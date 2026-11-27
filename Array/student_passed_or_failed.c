#include<stdio.h>
int main()
{
   int i ,marks[15];
   printf("enter the marks of the student scored out of 100 : ");
   for(i=0;i<15;i++)
   {    scanf("%d",&marks[i]);
        if(marks[i]<35)
        {

         printf("student is failed of roll no %d \n",i+1);
        }
        else
        {

            printf("student is passed of roll no %d \n",i+1);
        }
   }
   return 0;
}
