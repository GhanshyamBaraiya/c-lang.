#include<stdio.h>
int main()
{
	int a, b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	if((a*b)%21==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	   
	}
	
	return 0;
}
	   