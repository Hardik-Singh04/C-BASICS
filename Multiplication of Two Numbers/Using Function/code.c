#include<stdio.h>
#include<stdlib.h>

void multiplication(int a,int b)
{
    int multi;

    multi=a*b;

    printf("Multiplication of a and b is : %d",multi);

    return 0;
}
int main()
{
    int a,b;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    multiplication(a,b);

    return 0;
}
