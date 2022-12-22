//wap to input 6 numbers from user and count 
//total positive and negative number user inputed

//wap to input 5 subjects marks and print total, subject marks is only
// accepted when marks is 1 to 100
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter marks of 5 subjects... : ");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n>=0 && n<=100)
		{
			sum=sum+n;
		}
		else
		{
			i--;
			printf("Enter value again, value must be between 0-100 : ");
		}
	}
	printf(" total marks are : %d ",sum);
}
