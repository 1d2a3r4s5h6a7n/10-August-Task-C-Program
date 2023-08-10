//C Program to Display Armstrong Numbers Between 1 to 1000
//C Program to Check Armstrong Number
#include<stdio.h>
main()
{
	int n,sum=0,r,i,temp;
	printf("Enter the Number:");
	scanf("%d",&n);//153
	temp=n; //temp=153(fixed)
	while(n>0)  //for(temp=n;n!=0;n=n/10)
	{
		r=n%10;  //153/10=remainder(3) ===>r=15%10=remainder(5)===>r=1%10=remainder(1)
		//r=3 ====> r=5====> r=1
		sum=sum+(r*r*r);//sum=0+3*3*3==sum=27 ==>sum=27+5*5*5==sum=27+125=152  
				//==>sum=152+1*1*1==sum=152+1=153
		n=n/10;//n=153/10=quotient(15)==>n=15===>n=15/10=quotient(1)==>n=1
					//===>n=1/10=quotient(0.1==0)==>n=0
	}
	if(sum==temp)  //153==153
	{
		printf("%d is Armstrong Number",sum);
	}
	else
	{
		printf("%d is not Armstrong Number",temp);
	}
	  
}
