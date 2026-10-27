#include<stdio.h>
int main()
{
 int e;
 printf("Enter units consumed:");
 scanf("%d",&e);
 printf("   ---------------------------\n");
 printf("    Electricity Uses Report\n");
 printf("   ----------------------------\n");
 if(e<=100)
{
//git learning
 printf("    units : %d\n",e);
 printf("    Category : Low  Uses\n");
 }
 else if (e<=300)
 {
   printf("  Units :%d\n",e);
   printf("  Category  : Medium Uses\n");

 }
 else
 {
  printf("   Units  : %d\n",e);
  printf("   Category: High Uses");
 }
 return 0;
}
