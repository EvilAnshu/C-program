//wap to store n numbers from keyboard then print all the numbers in reverse order
#include<stdio.h>
void main()
{
	int n,b,i;
	printf("Enter the length of array : ");
	scanf("%d",&n);
	int a[n];
	
	//defining array
	for(i=0;i<n;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&a[i]);
	}
	
	//reverse of array
	for(i=0;i<n/2;i++)
	{
		//using 3rd variable
		
		b=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=b;
	
		//without using 3rd variable
		
		/*
		
		a[i]=a[i]+a[n-1-i];
		a[n-1-i]=a[i]-a[n-1-i];
		a[i]=a[i]-a[n-1-i];
		
		*/
	}
	
	//print reversed array
	for(i=0;i<n;i++)
	{
		printf("%d th element of array with index %d : %d\n",i+1,i,a[i]);
	}
}
