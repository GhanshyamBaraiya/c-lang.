#include<stdio.h>
int main()
{
	/*float v=40.5, s=25.6, m=90.52, t;
	t = ((v+s)+(1-m)*1);
	printf("((v+s)+(1-m)*1)=%f",t);*/

	float v, s, m;
	printf("enter v:");
	scanf("%f",&v);
	printf("enter s:");
	scanf("%f",&s);
	printf("enter m:");
	scanf("%f",&m);
	printf("((v+s)+(1-m)*1)=%f",((v+s)+(1-m)*1));
	
	return 0;
}
/*output

((v+s)+(1-m)*1)=-23.419996*/