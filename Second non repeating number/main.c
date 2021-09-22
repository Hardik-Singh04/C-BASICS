#include <stdio.h>             //second non-repeating element of array
int main()
{
    int num, i, j, flag = 0, index = 0;;
    printf("Enter number of elements you wanted to enter in Array : ");
    scanf("%d", &num);
    int arr[num];
    int newarr[num];
    printf("Enter elements of the Array : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        flag = 0;
        for (j = 0; j <= num; j++)
        {
            if (arr[i] == arr[j])
            {
                flag++;
            }
        }
        if (flag == 1)
        {
            newarr[index] = arr[i];
            index++;
        }
    }
     if (index == 1)
    {
        printf("\n There is 1 non repeting element in array i.e %d", newarr[0]);
    }
    else if (index > 1)
    {
        printf("\nSecond Non - repeating element of array is : %d", newarr[1]);
    }
    else
    {
        printf("\nThere is No non-repeting element in the array.");
    }
    return 0;
}
