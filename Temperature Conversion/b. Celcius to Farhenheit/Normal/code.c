#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Temp_F,Temp_C;
    printf("Enter the temperature in Celcius :");
    scanf("%f",&Temp_C);

    Temp_F=(Temp_C*1.8000)+32;
    printf("The temperature in Fahrenheit is : %.2f degree.\n",Temp_F);

    return 0;
}
