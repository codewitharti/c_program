#include<stdio.h>
int main()
{
int n;
printf("  Enter a number: ");
scanf("%d",&n);
if(n>0)
{
    printf("  Given number is positive\n");
        if(n%2==0)
            {
                printf("  Number type  : Even\n");
                    }
                        else
            {
                printf("  number type : odd\n");
            }
}
else if(n<0)
    {


            printf("  Given number is negative \n");
            if(n%2==0)
            {
                printf("  Number type : even\n");
            }
            else
            {
                printf("  Number type : odd\n");
            }
}
else
            {
                printf("  zero, neither even or neither odd");

            }
return 0;
}
