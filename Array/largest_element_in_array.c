#include<stdio.h>
int main()
{int n,i;
printf("enter number n: ");
scanf("%d",&n);
    int a[n];
    printf("enter that numbers you want to compare: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

}
int largest = a[0];
    for(i= 0;i< n;i++)
    {
        if(largest < a[i])
        {
            largest= a[i];
        }
    }
    printf("largest number is %d",largest);
    return 0;
}
