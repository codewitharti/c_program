
#include<stdio.h>
int main()
{
 int p,r,t;
 float s;
 printf("enter your price money: ");
 scanf("%d",&p);
 printf(" please enter your rate: ");
 scanf("%d",&r);
 printf("please enter your time in year: ");
 scanf("%d",&t);
 s=p*r*t/100.0;
 printf(" your simple interest is %f \n",s);
 printf("your total amount is %f ",p+s);
 getchar();
 return 0;
}
