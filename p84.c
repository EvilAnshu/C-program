//wap to input a string and count total word in string
		//techpile technology pvt ltd =4 words
#include<stdio.h>
#include<string.h>
void main()
{
	int i,word=1;
	char str[100];
	printf("Enter a string : ");
	gets(str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
		{
			word++;
		}
	}
	printf("total %d word present in array...",word);
}
