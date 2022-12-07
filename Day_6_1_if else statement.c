#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the Marks:");
	scanf("%d",&marks);
	if(marks>90&&marks<=100)
	{
		printf("congratulations you scored grade A+");
	}
	else if(marks>60&&marks<=85)
	{
		printf("congratulations you scored grade B+");
	}
	else if(marks>40&&marks<=60)
	{
		printf("congratulations you scored grade B");
	}
	else if (marks>30&&marks<=40)
	{
		printf("congratulations you scored grade C");
	}
	else if(marks>27&&marks<=30)

	{
	printf("you are pass");	
	}
	else
	{
		printf("Sorry you are fail");
	}
	return 0;
}
