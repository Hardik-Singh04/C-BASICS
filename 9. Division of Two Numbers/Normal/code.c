#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,divi=0;

    printf("Enter dividend :");
    scanf("%d",&a);

    printf("Enter divisor :");
    scanf("%d",&b);

    divi=a/b;

    printf("Quotient  is : %d",divi);
    
    return 0;
}
