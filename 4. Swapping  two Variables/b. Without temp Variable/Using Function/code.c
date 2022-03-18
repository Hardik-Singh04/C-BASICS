#include<stdio.h>
#include<stdlib.h>

void swap(int a,int b)
{
    printf("Before Swapping :");
    printf("Value of a = %d\nValue of B = %d\n",a,b);

    printf("After Swapping :");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("Value of a = %d\nValue of B = %d\n",a,b);
}
int main()
{
    int a,b;

    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    swap(a,b);

    return 0;
}
