//wap to create record of 15 players of a cricket team having fields player name, state name, experience, batting avarage, strick rate. 
//then print name and strick rate of those players whose experience is more than 10 years
#include<stdio.h>
struct player
	{
		char name[60];
		char state[50];
		int experience;
		float avarage;
		float strick;
	};
void main()
{
	int i;
	struct player p[5];
	printf("Enter all players details : \n");
	for(i=0;i<5;i++)
	{
		printf("Enter player name : ");
		scanf("%s",&p[i].name);
		printf("Enter player state : ");
		scanf("%s",&p[i].state);
		printf("Enter player experience : ");
		scanf("%d",&p[i].experience);
		printf("Enter player avarage : ");
		scanf("%f",&p[i].avarage);
		printf("Enter player strick : ");
		scanf("%f",&p[i].strick);
		printf("\n");
	}
	printf("name and strick rate of those players whose experience is more than 10 years\n");
	for(i=0;i<5;i++)
	{
		if(p[i].experience>10)
		{
			printf("--------------------------------------------------------\n");
			printf("name : %s\n",p[i].name);
			printf("strick rate : %f\n",p[i].strick);
			printf("--------------------------------------------------------\n");
		}
	}
}
