#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,b,peri,cost;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);

    peri=2*(l+b);
    printf("The area is : %d metre \n ",peri);

    cost=25*peri;
    printf("The cost is : Rs. %d\n",cost);

    return 0;
}
