#include<stdio.h>
int main()
{
	int i=0,productno[i], price[i], qty[i], rat[i], discountamt[i], ratead[i], gst[i], billamunt[i];
	int a=0,b=0,c=0;

	for (i=0;i<5;i++)
   {
	printf("productno [%d]:",i+1);
	scanf("%d",&productno[i]);
   }
   
   for (i=0;i<5;i++)
   
	{
	printf("price [%d]:",i+1);
	scanf("%d",&price[i]);
	}
	for (i=0;i<5;i++)
   {

	printf("qty [%d]:",i+1);
	scanf("%d",&qty[i]);
   }

	for (i=0;i<5;i++)
	{
	rat[i] = price[i]*qty[i];
	
	discountamt[i]=rat*0.10;
	
	ratead[i]=rat[i]-discountamt[i];
	
	gst[i]=ratead*0.18;
	
	billamunt[i]=ratead[i]+gst[i];
	}
	
	printf("productno, price, qty,  rat, discountamt, ratead, gst, billamunt");
	for (i=0;i<5;i++)
	{
	printf("\n%d   \t    %d\t  %d\t%d\t%d\t   %d\t  %d\t%d",productno[i],price[i],qty[i],rat[i],discountamt[i],ratead[i],gst[i],billamunt[i]);

	}
	for(i=0;i<5;i++)

	{
	   a=a+discountamt[i];
	}
		printf("\n                       -------------------------------------");

		printf("\n\t\t\t       %d",a);

	for(i=0;i<5;i++)
	
	{
		b=b+gst[i];
	}

	printf("\t\t  %d",b);

	for(i=0;i<5;i++)
	{
		c=c+billamunt[i];
	}

	printf("\t %d",b);
	
	

	return 0;
	
}