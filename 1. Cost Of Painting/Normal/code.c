#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,b,area,cost;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);

    area=l*b;
    printf("The area is : %d metre sq.\n ",area);

    cost=25*area;
    printf("The cost is : Rs. %d\n",cost);

    return 0;
}
