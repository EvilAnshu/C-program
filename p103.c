//wap to swapcase of a string character without using library fun 
#include<stdio.h>
void main()
{
	char str[100];
	int i;
	printf("Enter a string : ");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		else if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("string : %s",str);
}
