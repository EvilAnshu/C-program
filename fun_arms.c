// wap to make a udf to check a given number is armstrong number or not
#include<stdio.h>
int armstrong(int num);
void main()
{
	int r,n;
	printf("Enter a number : ");
	scanf("%d",&n);
	r=armstrong(n);
	if(r==1)
	printf("Fn return %d , Number is armstrong",r);
	else
	printf("Fn return %d , Number is not armstrong",r);
}
int armstrong(int num)
{
	 int cu=0,temp;
	 temp=num;
	 for(num;num>0;num=num/10)
	 {
	 	cu=cu+(num%10)*(num%10)*(num%10);
	 }
	 if(cu==temp)
	 return 1;
	 else
	 return 0;
}
