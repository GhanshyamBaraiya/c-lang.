#include<stdio.h>
int main()
{
	char i=1;
	//printf("print A-a to Z-z :");

	
	do 
{
	printf("\n %c - %c",i+64, i+64+32);
    i++;

}   while (i<=26);

	return 0;
}