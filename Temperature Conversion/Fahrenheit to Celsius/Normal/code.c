#include<stdio.h>
#include<stdlib.h>

int main()
{
    float Temp_F,Temp_C;
    printf("Enter the temperature in Fahrenheit :");
    scanf("%f",&Temp_F);

    Temp_C=((Temp_F-32)/1.8000);
    printf("The temperature in Celcius is : %.2f degree.\n",Temp_C);

    return 0;
}
