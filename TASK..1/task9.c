#include <stdio.h>
int main()
{
	/*float p=100, r=8, n=3, a;
	a = p*(1+(r/100)/n)-p;
	printf("p*(1+(r/100)/n)-p=%f",a); */
	
	float p, r, n;
	printf("enter p:");
	scanf("%f",&p);
	printf("enter r:");
	scanf("%f",&r);
	printf("enter n:");
	scanf("%f",&n);

	printf("\n p : %f",p);
	printf("\n r : %f",r);
	printf("\n n : %f",n);
	
	printf("\n p*(1+(r/100)/n)-p = %f ",p*(1+(r/100)/n)-p);

	return 0;
}
/*output

p*(1+(r/100)/n)-p=2.666667*/