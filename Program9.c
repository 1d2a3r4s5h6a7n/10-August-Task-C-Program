//C Program to Make a Simple Calculator
// addition,sub,mul,div,mod (remainder) 
#include<stdio.h>
 main ()
{
	int a,c,add,sub,mul,div,mod;
	printf("enter two values: \n"); 
	scanf("%d%d",&a,&c);
	add=a+c;
	sub=a-c;
	mul=a*c;
	div=a/c;
	mod= a % c;
	printf("Addition : %d\n substraction : %d\n Multiplication : %d\n dividion :%d\n modulo: %d\n",add,sub,mul,div,mod);
}

//Using Switch Case
/*
#include<stdio.h>
void main()
{
	int a,b,add,sub,mul,div,mod,ch;
	printf("-----------MENU-------------\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplition\n");
	printf("4.Division\n");
	printf("5.Modulo\n");
	printf("Enter two Number that you want to calculate:\n");
	scanf("%d%d",&a,&b);
	printf("Enter your Choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			add=a+b;
			printf("Addition of %d and %d is :%d",a,b,add);	
			break;
		case 2:
			sub=a-b;
			printf("Subtraction of %d and %d is :%d",a,b,sub);
			break;
		case 3:
			mul=a*b;
			printf("Multiplition of %d and %d is :%d",a,b,mul);
			break;
		case 4:
			div=a/b;
			printf("divition of %d and %d is :%d",a,b,div);
			break;
		case 5:
			mod=a%b;
			printf("Modulo of %d and %d is :%d",a,b,mod);
			break;
		default:
			printf("\nEnter given Choice");	
			break;
	}	
}*/
