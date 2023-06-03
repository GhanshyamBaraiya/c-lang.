#include<stdio.h>
int main()
{
	char value;

	printf("enter value:");
	scanf("%c",&value);

	if (value=='a' || value=='e' ||value=='i' ||value=='o' ||value=='u')

	{
		printf("\n (%c) vowel",value,value);
	}
	
	else

	{
		printf("\n (%c) constant",value,value);
	}

	return 0;
}