//wap to create record of 100 students having members student roll no, name, course, branch and percentage. Then print the record of the students having percentage more than 80%.
#include<stdio.h>
struct student
	{
		int roll;
		char name[60];
		char course[50];
		char branch[50];
		float per;
	};
void main()
{
	int i;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter your Roll No : ");
		scanf("%d",&s[i].roll);
		printf("Enter your name : ");
		scanf("%s",&s[i].name);
		printf("Enter your course : ");
		scanf("%s",&s[i].course);
		printf("Enter your branch : ");
		scanf("%s",&s[i].branch);
		printf("Enter your percentage : ");
		scanf("%f",&s[i].per);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		if(s[i].per>80.0)
		{
			printf("--------------------------------------------------------\n");
			printf("roll no : %d\n",s[i].roll);
			printf("name : %s\n",s[i].name);
			printf("course : %s\n",s[i].course);
			printf("branch : %s\n",s[i].branch);
			printf("percentage : %f\n",s[i].per);
			printf("--------------------------------------------------------\n");
		}
	}
}
