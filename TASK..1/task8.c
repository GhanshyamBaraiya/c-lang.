#include<stdio.h>
int main()
{
	/*float z=4, a=92, c=4.8, b=7.50, d=2, p=100, s;
	s = ((z*a+c)-d*a*b)/p;
	printf("((z*a+c)-d*a*b)/p=%f",((z*a+c)-d*a*b)/p);*/
	
	float z, a, c, b, d, p;
	printf("enter z:");
	scanf("%f",&z);
	printf("enter a:");
	scanf("%f",&a);
	printf("enter c:");
	scanf("%f",&c);
	printf("enter b:");
	scanf("%f",&b);
	printf("enter d:");
	scanf("%f",&d);
	printf("enter p:");
	scanf("%f",&p);
	printf("((z*a+c)-d*a*b)/p=%f",((z*a+c)-d*a*b)/p);
	
	return 0;
}
/*output

((z*a+c)-d*a*b)/p=-10.072000*/
