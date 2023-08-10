//C Program to Check Whether a Character is Vowel or Consonant 
#include<stdio.h>
main()
{
	char chr;
	printf("Enter the Character:");
	scanf("%c",&chr);
	if(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' || 
	chr=='A' || chr=='E' || chr=='I' || chr=='O' || chr=='U')
	{
		printf("%c is Vowel",chr);
	}
	else
	{
		printf("%c is Consonant",chr);
	}
}
