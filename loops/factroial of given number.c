#include<stdio.h>
int main()
{
    int num,factorial,i;
    factorial=1;
    printf("enter a number: ");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        factorial=factorial*i;
    }
        printf( "factorial of given number is: %d ",factorial);

    return 0;
}
