#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,remainder=0;

    printf("Enter dividend :");
    scanf("%d",&a);

    printf("Enter divisor :");
    scanf("%d",&b);

    remainder=a%b;

    printf("Remainder  is : %d",remainder);
    
    return 0;
}
