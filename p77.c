//wap to input a 3*3 array and print transpose of matrix
#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter element of %d row :\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Transpose of matrox :\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
