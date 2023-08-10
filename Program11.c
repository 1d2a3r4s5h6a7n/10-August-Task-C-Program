//C Program to Print Fibonacci Series
#include<stdio.h>
main()
{
	int i,num,n1=0,n2=1,n3;
	printf("Enter the Positive Natural Number:");
	scanf("%d",&num);
	printf("Fibonacci Series of %d is :",num);
	for(i=1;i<=num;i++)
	{	
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
}
