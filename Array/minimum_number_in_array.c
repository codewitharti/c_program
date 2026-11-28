#include<stdio.h>
int main()
{
    int n,i;
    printf("enter number n: ");
    scanf("%d",&n);
    int a[n];
    printf("enter that numbers you want to compare: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);

}
    int minimum = a[0];
        for(i= 0;i< n;i++)
        {
        if(minimum > a[i])
        {
            minimum = a[i];
        }
    }
    printf("minimum number is %d",minimum);
    return 0;
}

