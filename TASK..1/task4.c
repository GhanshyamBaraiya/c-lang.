#include<stdio.h>
int main()
{
	/* float R=400, D=80;
	printf("R/D=%f", R/D); */

	float r,d;
	printf("enter r:");
	scanf("%f",&r);
	printf("enter d:");
	scanf("%f",&d);
	printf("%f r/%f d = %f",r,d,r/d);

	return 0;
}

/*output

R/D=5.000000*/

/*output

enter r:900
enter d:85
900.000000 r/85.000000 d = 10.588235*/