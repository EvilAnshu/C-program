// wap to print 
#include<stdio.h>
void main()
{
	int first=0,sec=1,next,n,num;
	printf("Enter Number of terms : ");
	scanf("%d",&num);
	for(n=1;n<=num;n++)
	{
		next=first+sec;
		printf("%d\t",first);
		first=sec;
		sec=next;
		
	}
}
