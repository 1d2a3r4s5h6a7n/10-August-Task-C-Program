//C Program to Calculate Sum of Natural Numbers 
//first way using for loop 
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter Positive Natural Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;  //sum+=i;
	}
	printf("Sum of first %d Natural Number is %d",n,sum);
}

//Second Way using Maths Formula -->sum=n*(n+1)/2;
/*#include<stdio.h>
main()
{
	int i,n,sum;
	printf("Enter Positive Natural Number:");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("Sum of first %d Natural Number is %d",n,sum);
}*/
