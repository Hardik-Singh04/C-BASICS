#include<stdio.h>
#include<stdlib.h>

int calc(int BP)
{
    int HRA=0,TA=0,DA=0,NS=0;
    HRA=(10*BP)/100;
    printf("The HRA is : Rs. %d\n",HRA);

    TA=(5*BP)/100;
    printf("The TA is : Rs. %d\n",TA);

    DA=(15*BP)/100;
    printf("The DA is : Rs. %d\n",DA);

    NS=BP + HRA + TA + DA;
    return NS;
}
int main()
{
    int BP,NS=0;
    printf("Enter the Basic Pay :");
    scanf("%d",&BP);

    NS=calc(BP);
    printf("The Net Salary is : Rs. %d\n",NS);

    return 0;
}
