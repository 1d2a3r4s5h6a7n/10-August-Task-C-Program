//C Program to Display Armstrong Numbers Between 1 to 1000

#include<stdio.h>
main()
{
	int num,sum,r,i,temp,start,end;
	printf("Enter Start Number:");
	scanf("%d",&start);
	printf("Enter End Number:");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		sum=0;
		num=i; //num=1,2
		temp=num; //temp=1,2
		while(num>0)  //1>0,2>0
		{
			r=num%10; //r=1%10 ==> r=1,2
			sum=sum+r*r*r; //sum=1,9
			num=num/10; //num=0,0
		}
		if(sum==temp) //1==1 9==2
		{
			printf("%d \t",temp); //1
		}
	}
	  
}
