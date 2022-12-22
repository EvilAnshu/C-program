//wap to input 10 elements of array and check a given number is present in array or not(linear search)
#include<stdio.h>
void main()
{
	int arr[10],num,i,count=0;
	printf("Enter 10 Numbers of array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to check in array: ");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			count += 1;
			break;
		}
	}
	if(count>0)
	{
		printf("%d is present in array..",num);
	}
	else
	{
		printf("%d is not present in array..",num);
	}
}
