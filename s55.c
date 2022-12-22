//wap to print sum of all elements of 2d array of size 2x4
#include<stdio.h>
void main()
{
	int i,j,arr[2][4],sum=0;
	for(i=0;i<2;i++)
	{
		printf("Enter element of %d row :",i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
			sum += arr[i][j];
		}
	}
	printf("sum of all elements : %d",sum);
}
