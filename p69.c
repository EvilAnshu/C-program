//wap to check number is present in array and print index of number
#include<stdio.h>
void main()
{
	int arr[10],i,num,count=0;
	printf("Enter 10 numbers in array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to search in array : ");
	scanf("%d",&num);
	for(i=0;i<10;i++)
	{
		if(num==arr[i])
		{
			printf("%d is present on index : %d \n",num,i);
			count += 1;
		}
	}
	if(count==0)
		{
			printf("%d is not present in array !",num);
		}
}
