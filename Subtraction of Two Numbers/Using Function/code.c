#include<stdio.h>
#include<stdlib.h>

void subcalc(int a,int b)
{
    int sub;
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
int main()
{
    int a,b;

    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);

    subcalc(a,b);

    return 0;
}
