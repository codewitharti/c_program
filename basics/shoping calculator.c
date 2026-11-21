#include<stdio.h>
int main()
{
  int quantity;
   float price,amount;
   printf(" enter price of item:");
   scanf("%f",&price);
   getchar();

   printf("  enter quantity of item: ");
   scanf("  %d",&quantity);
   getchar();
   amount=price*quantity;
   printf(" -----------------------------\n");
   printf("     SHOPING BILL\n");
   printf("-------------------------------\n");
   printf(" price per item :Rs. %f\n",price);
   printf(" Quantity        : %d \n",quantity);
   printf(" Total Amount    : Rs. %f\n",price*quantity);
   printf("-------------------------------");
   getchar();
    return 0;
}
