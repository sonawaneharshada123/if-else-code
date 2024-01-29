#include<stdio.h>
int main()
{
	int age;
	printf("\n Enter the age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n you are allowed for voting");
	}
	else
	{
		printf("\n you are not allowed for voting");
	}
	
	return 0;
}

