//C Program to Generate Multiplication Table 
#include<stdio.h>
main()
{
	int i,n,temp;
	printf("Enter the number to dispaly that table:");
	scanf("%d",&n);
	printf("==>Tables of %d\n",n);
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",n,i,n*i);
	}
}

