#include<stdio.h>
int main()
{
/*	int a=8, d=5, z;
	
	z = a*a;
	printf("%d",a*a);
	printf("\n%d",a*a*a);
	printf("\n%d",d*d);
	printf("\n%d",d*d*d);*/

	int a,b;
	printf("enter a : ");
	scanf("%d",&a);
	printf("enter b : ");
	scanf("%d",&b);
	printf("%d",a*a);
	printf("\n%d",a*a*a);
	printf("\n%d",b*b);
	printf("\n%d",b*b*b);

	return 0;
}
/*output
64
512
25
125*/

/*output

enter a : 10
enter b : 20
100
1000
400
8000*/