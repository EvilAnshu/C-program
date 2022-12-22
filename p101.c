//wap to input a string and count total lowercase alphabates , uppercase alphabates and digits and symbols present in string
#include<stdio.h>
#include<string.h>
int length(char str[]);
void main()
{
	char str[100];
	int i,lower=0,upper=0,digit=0,symbol=0;
	printf("Enter a String : ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			lower++;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			upper++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			symbol++;
		}
	}
	printf("%s Contain total %d lowercase alphabate, %d uppercase alphabate, %d digit, %d symbol",str,lower,upper,digit,symbol);
}
