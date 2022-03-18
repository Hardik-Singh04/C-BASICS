#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,sub=0;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    if(a>b)
    {
        sub=a-b;
        printf("Subtraction of a and b is :  %d\n",sub);
    }
    else if(b>a)
    {
        sub=b-a;
        printf("Subtraction of b and a is :  %d\n",sub);
    }
    
    return 0;
}
