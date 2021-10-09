#include<stdio.h>
#include<stdlib.h>

void sumcalc(int a,int b)
{
    int sum=a+b;

    printf("Sum of a and b is :  %d\n",sum);

    return 0;
}
int main()
{
    int a,b;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    sumcalc(a,b);

    return 0;
}
