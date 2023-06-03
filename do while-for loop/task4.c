#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);

    do
{	
	printf("\n HELLO  %d",n);
    n--; 
}   while(n>=1);

	return 0;
}