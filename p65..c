//wap to input 10 elements of array and count total even and odd values present in array
#include<stdio.h>
void main()
{
	int arr[10],odd=0,i,even=0;
	printf("Enter 10 Numbers of array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even += 1;
		}
		else
		{
			odd += 1;
		}
	}
		printf("total %d odd and %d even number in array..",odd,even);
}
