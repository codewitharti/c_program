#include<stdio.h>
int main()
{
 int id,pin;
 printf("Enter user ID: ");
 scanf("%d",&id);
 printf("Enter PIN: ");
 scanf("%d",&pin);
 if(id==101&&pin==1234)
 {printf(" ======================\n");
 printf("     LOGIN SUCESSS\n");
 printf("  ======================\n");
 printf   ("    Welcome,User 101!\n");
 printf("       Access granted\n");
 printf("  ======================\n");

 }
 else
 {
  printf("ERROR,Access denied");

 }
 return 0;
}
