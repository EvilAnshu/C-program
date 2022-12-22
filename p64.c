//wap to input 10 elements of array and check a given number is how many times present in array

/*
-------------------------------
input 10 elements of array :
10 40 79 6 4 3 5 6 7 4
input a value to search in array :
4
yes! 4 is present 2 times in array
--------------------------------
*/

#include<stdio.h>
void main()
{
	int arr[10],num,i,count=0;
	printf("Enter 10 Numbers of array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("input a value to search in array : ");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			count += 1;
		}
	}
	if(count>0)
	{
		printf("yes! %d is present %d times in array..",num,count);
	}
	else
	{
		printf("%d is not present in array..",num);
	}
}
