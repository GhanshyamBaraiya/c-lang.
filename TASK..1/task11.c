#include<stdio.h>
int main()
{
	/*float pi=3.14,r=4,area;
        area=pi*r*r;
	printf("\n area of circle:%f",area);*/
	
	float pi, r;
	printf("enter pi:");
	scanf("%f",&pi);
	printf("enter r:");
	scanf("%f",&r);
	
	printf("\n pi : %f", pi);
	printf("\n r : %f", r);
	printf("\n pi*r*r:%f",pi*r*r);
	
	

	return 0;
}
/*output
 
 area of circle :50.240002*/