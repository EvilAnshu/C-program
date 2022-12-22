// wap to make a udf to print all armstrong number between 1 to 10000
#include<stdio.h>
#include<math.h>
int armstrong(int num);
int digit(int num);
void main()
{
	int num;
	for(num=1;num<=10000;num++)
	{
		if(armstrong(num)==1)
		printf("%d\t",num);
	}
}
int digit(int num)
{
	int count=0;
	for(num;num>0;num=num/10)
	{
		count += 1;
	}
	return count;
}
int armstrong(int num)
{
	int sum=0,temp=num;
	int dig=digit(num);
	for(num;num>0;num=num/10)
	{
		sum=sum+pow(num%10,dig);
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}
