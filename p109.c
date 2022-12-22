#include<stdio.h>
struct student
{
	char name[100];
	char gen;
	int rollno;
	float fee;
};
typedef struct student student;
void main()
{
	student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter name , gender, rollno , fee of %d student : ",i+1);
		gets(s[i].name);
		s[i].gen=getchar();
		scanf("%d",&s[i].rollno);
		scanf("%f",&s[i].fee);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		if(s[i].fee>2000)
		{	printf("-------------------------------------------\n");
			printf("name : %s\n",s[i].name);
			printf("gender : %c\n",s[i].gen);
			printf("roll no : %d\n",s[i].rollno);
			printf("fee : %f\n",s[i].fee);
		}
	}
}
