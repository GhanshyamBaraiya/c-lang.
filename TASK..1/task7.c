#include<stdio.h>
int main()
{
	/*float k=42, a=86, z=4, x;
	x = (k-z)*(a*z)/100;
	printf("(k-z)*(a*z)/100=%f",(k-z)*(a*z)/100 );*/

	int k,  a, z;
	printf("enter k:");
	scanf("%d",&k);
	printf("enter a:");
	scanf("%d",&a);
	printf("enter z:");
	scanf("%d",&z);
	printf("(k-z)*(a*z)/100=%d",(k-z)*(a*z)/100 );
	
	return 0;
}
/*output


(k-z)*(a*z)/100=130.720000*/