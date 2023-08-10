//C Program to Print Alphabets From A to Z Using Loop 
//Using integer datatype and print in character datatype
#include<stdio.h>
main()
{
	int i;
	printf("Alphabets from a - z :\n");
	//Use of Ascii Value for A=65 And Z=90
	for(i=65;i<=90;i++)
	{
		printf("%c\n",i);
	}
}

//using character Datatype
/*#include<stdio.h>
main()
{
	char chr;
	printf("Alphabets from a - z :\n");
	for(chr='A';chr<='Z';chr++)
	{
		printf("%c\n",chr);
	}
}*/
