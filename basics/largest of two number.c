#include<stdio.h>
int main()
{
 int x,y;
 printf("enter two number");
 scanf("%d %d",&x,&y);
 if(x>=y)
        printf("%d is largest number",x);
 else
    printf("%d is largest number",y);
 return 0;
}
