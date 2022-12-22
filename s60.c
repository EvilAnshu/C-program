/*
Union : it is user defined data type it is collection of heterogeneous data.

difference between structure and union
---------------------------------------
structure : 
1. it's keyword is struct.
2. all the members have their own storage in memory.
3. Total size is equal to sum of size of each member.
4. All the members can be stored at a time.

union :
1. it's keyword is union.
2. all the members share common storage in memory.
3. Total size is equal to Size of highest size member.
4. only one member can be stored at a time.

*/
//wap to store 2 dates. to store date use a structure having 3 members day,month and year. then print whether dates are
//same or not
#include<stdio.h>
void main()
{
	struct dates
	{
		int date;
		int month;
		int year;
	}date[2];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter %d date : ",i+1);
		scanf("%d",&date[i].date);
		printf("enter %d month : ",i+1);
		scanf("%d",&date[i].month);
		printf("enter %d year : ",i+1);
		scanf("%d",&date[i].year);
	}
	if(date[0].date==date[1].date && date[0].month==date[1].month && date[0].year==date[1].year)
	{
		printf("both dates are same...");
	}
	else
	{
			printf("both dates are not same...");
	}
}











