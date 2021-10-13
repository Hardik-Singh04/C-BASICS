#include<stdio.h>
#include<stdlib.h>

void remainder(int a,int b)
{
    int r;

    r=a%b;
    printf("Remainder is : %d",r);

    return 0;
}
int main()
{
    int a,b;

    printf("Enter dividend :");
    scanf("%d",&a);

    printf("Enter divisor :");
    scanf("%d",&b);

    remainder(a,b);

    return 0;
}
