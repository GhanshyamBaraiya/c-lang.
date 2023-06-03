#include<stdio.h>
int main()
{
	char i;
	printf("print A-a to Z-z :");

	
	for (i=1; i<=26; i++)
{
	printf("\n %c - %c",i+64, i+64+32);
}
	return 0;
}