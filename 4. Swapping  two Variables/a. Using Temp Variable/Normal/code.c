#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,temp=0;

    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    printf("Before Swapping :");
    printf("Value of a = %d\nValue of B = %d\n",a,b);

    printf("After Swapping :");
    temp=a;
    a=b;
    b=temp;

    printf("Value of a = %d\nValue of B = %d\n",a,b);

    return 0;
}
