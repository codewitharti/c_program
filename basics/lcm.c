#include<stdio.h>
int main()
{
    int a,b,x;
printf(" please enter two number");
scanf("%d %d",&a,&b);
for(x=1;a<x<=a*b;x++)
{
if(x%a==0&&x%b==0)
{
 printf("Lcm of given number is %d",x);
 break;
}
}
getchar();
return 0;
}
