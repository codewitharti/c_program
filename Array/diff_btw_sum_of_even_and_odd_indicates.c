#include<stdio.h>
int main()
{int n,i;
int sumeven=0,sumodd=0,difference;
printf("enter size of array : ");
scanf("%d",&n);
    int a[n];
    printf("enter that %d numbers you want to in your array: ",n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

}
for(i= 0;i< n;i++)
{
    if(i%2==0)
    {
      sumeven = sumeven+a[i] ;
    }
    else
        {
        sumodd = sumodd +a[i];
    }
}
    difference = sumeven - sumodd;
    printf("difference between sum odd of indices and even indices is  %d", difference);
    return 0;
}
