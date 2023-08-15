//C Program to Find HCF of Two Numbers

#include<stdio.h>
main()
{
	int n1, n2, lcm, hcf, product;
	printf("Enter two positive number:");
	scanf("%d %d",&n1, &n2);
	product=n1*n2;
	if(n1>n2)
	{
		lcm=n1;
	}
	else
	{
		lcm=n2;
	}
	while(1){
		if((lcm % n1==0) && (lcm % n2==0))
		{
			printf("The lcm of %d and %d is %d",n1,n2,lcm);
			break;
		}
		lcm++;
	}
	//formula of HCF=Product of two number(n1*n2) / lcm of two number(n1,n2)
	hcf=product/lcm;
	printf("\nThe HCF of %d and %d is %d",n1,n2,hcf);
//	return 0;
}
