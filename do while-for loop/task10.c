#include<stdio.h>
int main()
{
	char i='A';
	printf("print A to Z :");

	
	do 
{
	printf("\n %c-%d",i,i);
    i++;
}   while ( i<='Z');
	return 0;
}