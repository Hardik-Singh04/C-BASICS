#include<stdio.h>
#include<stdlib.h>

int cost_calc(int l,int b)
{
    int peri,cost;
    peri=2*(l+b);
    printf("The perimeter is : %d metre \n ",peri);

    cost=25*peri;
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
