#include<stdio.h>
int main()
{
	int i=1, sum=0;
 //total even 
	
	do
{
	sum +=i;


	printf("\n total even = %d",  sum);
    i+=2;
}   while  ( i<=10 );

	return 0;
}