#include<stdio.h>             //Finding largest,second largest,smallest and second smallest element of array
int main()
{
	int num,temp;
    printf("Enter the number of elements you want to enter in array : ");
	scanf("%d",&num);
	int arr[num];
	for(int i = 0; i< num; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<num;i++)         //Sorting Array
    {
        for(int j=i+1; j<num ;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
	printf("Largest = %d \nSecond Largest = %d \nSmallest = %d \nSecond Smallest = %d",arr[0],arr[1],arr[num-1],arr[num-2]);
	return 0;
}
