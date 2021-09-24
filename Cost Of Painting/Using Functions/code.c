#include<stdio.h>
#include<stdlib.h>

int cost_calc(int l,int b)
{
    int area,cost;
    area=l*b;
    printf("The area is : %d metre sq.\n ",area);

    cost=25*area;
    return cost;
}
int main()
{
    int l,b;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);

    
    int cost=cost_calc(l,b);
    
    printf("The cost is : Rs. %d\n",cost);

    return 0;
}
