//C Program to Find Largest Number Among Three Numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three Number:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
		{
			printf("%d is Largest",a);
		}
		else
		{
			printf("%d is Largest",c);
		}
	}
	else
	{
		if(b>=c)
		{
			printf("%d is Largest",b);
		}
		else
		{
			printf("%d is Largest",c);
		}
	}
}
