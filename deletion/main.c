#include<stdio.h>      //deletion of alternative element from Array
int main()
{
	int num,j = 0;
	printf("Enter number of elements you wanted to enter in the array: ");
	scanf("%d",&num);
	int arr[num],index=0;
	for( int i = 0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	int arr1[num];
	for(int i = 0;i<num;i++)
	{
		if(i%2 == 0)
		{
			arr1[j] = arr[i];
			j++,index++;
		}
	}
	for( int i = 0; i<index; i++)
	{
		printf("%d ",arr1[i]);
	}
	return 0;
}

