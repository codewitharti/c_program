#include<stdio.h>
int main()
{
    int x;
    printf("please enter the name of year ");
    scanf("%d",&x);
    if(x%4==0)
    {
    printf("given year is leap year");}
    else{
        printf("given year is not leap year");
    }
    getchar();
    return 0;
}

