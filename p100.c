//wap to compare two strings without using library function
#include<stdio.h>
#include<string.h>
void comp(char str2[],char str[]);
void main()
{
	char str[100],str2[100];
	printf("Enter first String : ");
	gets(str);
	printf("Enter second String : ");
	gets(str2);
	printf("first string : %s second string : %s",str,str2);
	comp(str,str2);
}
void comp(char str2[],char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str2[i]!=str[i])
		{
			printf("\nStrings are not equal..");
			count++;
			break;
		}
	}
	if(count==0)
		{
			printf("\nStrings are equal..");
		}	
}
