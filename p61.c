//wap to store 10 int values in a array and print values
// from last index to 0th index
#include<stdio.h>
void main()
{
	int arr[10],i;
	printf("Enter 10 Elements of array : ");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	printf("All Elements of array in decreasing order of index are : \n");
	for(i=9;i>=0;i--)
	printf("%d\n",arr[i]);
}
