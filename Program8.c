//C Program to Find Factorial of a Number
#include<stdio.h>
main()
{
	int i,n,fact=1;
	printf("Enter the Number:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)  //for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d is %d",n,fact);
}

