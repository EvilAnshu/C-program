//wap to input a 3*3 array and print last column value of each row
#include<stdio.h>
void main()
{
	int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter Element of %d row : ",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",arr[i][2]);
	}
}
