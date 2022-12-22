//wap to input 6 subject marks and find sum and avarage of marks
#include<stdio.h>
void main()
{
	int arr[6],i,sum=0;
	printf("Enter 6 subject of marks : ");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
		printf("sum is : %d and avarage is %d ",sum,sum/6);
}
