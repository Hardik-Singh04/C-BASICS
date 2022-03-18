#include<stdio.h>
#include<stdlib.h>

float calc(float Temp_C)
{
    float Temp_F;

    Temp_F=(Temp_C*1.8000)+32;
    return Temp_F;
}
int main()
{
    float Temp_F,Temp_C;
    printf("Enter the temperature in Celcius :");
    scanf("%f",&Temp_C);

    Temp_F=calc(Temp_C);
    printf("The temperature in Farhenheit is : %.2f degree.\n",Temp_F);

    return 0;
}
