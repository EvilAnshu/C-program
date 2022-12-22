//wap to input 5 subject marks of 3 students and print total of student marks
#include<stdio.h>
void main()
{
	int ar[3][5],i,j,sum;
	for(i=0;i<3;i++)
	{
		printf("Enter 5 subject Marks of %d student : \n",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<5;j++)
		{
			sum += ar[i][j];
		}
		printf("Total Marks of %d student : %d \n",i+1,sum);
	}
}
