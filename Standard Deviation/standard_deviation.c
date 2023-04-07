// Program to calculate the standard deviation of a population
#include <math.h>
#include <stdio.h>
float calculateSD(float data[]) 
{
    float sum=0,mean,SD=0;
    int i;
    for (i=0;i<10;i++)
     {
        sum+=data[i];
    }
    mean=sum/10;
    for (i=0;i<10;i++)
     {
        SD+=pow(data[i]-mean, 2);
    }
    return sqrt(SD/10);
}
int main() 
{
    int i;
    float data[10];
    printf("Enter 10 elements: ");
    for (i = 0; i < 10; ++i)
    {
    	scanf("%f", &data[i]);
    }
    printf("\nStandard Deviation = %.6f", calculate(data));
    return 0;
}