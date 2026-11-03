#include<stdio.h>
int main()
{int x ,a;
printf("enter a five digit number");
scanf("%d",&x);
printf("the individual digit are" ,a);
while(x>0)
{
 a=x%10;
 printf("%d ",a );
 x=x/10;
}
 getchar();
 return 0;
}
