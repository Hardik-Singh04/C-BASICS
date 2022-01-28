#include<stdio.h>                  //pallindrome numbers in array
void pallindrome(int arr[], int num)
{
    int temp,sum=0,rem;
    printf("The pallindrome number are : ");
    for(int i=0;i<num;i++)
    {
        sum=0,rem=0;
        temp=arr[i];
        while(temp>0)
        {
            rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        }
        if(arr[i]==sum)
        {
            printf("%d    ",arr[i]);
        }
    }
}
int main()
{
    int num;
    printf("Enter the number of elements you wanted to enter in array : ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements of Array : ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    pallindrome(arr,num);
    return 0;
}


