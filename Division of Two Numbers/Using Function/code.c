#include<stdio.h>
#include<stdlib.h>

void division(int a,int b)
{
    int divi;

    divi=a/b;
    printf("Quotient  is : %d",divi);

    return 0;
}
int main()
{
    int a,b;

    printf("Enter dividend :");
    scanf("%d",&a);

    printf("Enter divisor :");
    scanf("%d",&b);

    division(a,b);

    return 0;
}
