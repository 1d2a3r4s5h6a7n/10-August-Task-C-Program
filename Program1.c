//C Program to Check Whether a Number is Positive, Negative, or Zero
#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("Number is Positive");
	}
	else if(a<0)
	{
		printf("Number is Negative");
	}
	else
	{
		printf("Number is Zero");
	}
}
