//wap to input a 3*3 array and print all addition of both array
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("Enter elemnet of 1st array : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter elemnet of %d row : \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elemnet of 2nd array : \n");
	for(i=0;i<3;i++)
	{
		printf("Enter elemnet of %d row : \n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of both array : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
