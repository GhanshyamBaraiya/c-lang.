#include<stdio.h>
int main()
{
	int productno, price, qty, rat, discountamt, ratead, gst, billamunt;

	printf("productno:");
	scanf("%d",&productno);

	printf("price:");
	scanf("%d",&price);

	printf("qty:");
	scanf("%d",&qty);

	rat=price*qty;
	discountamt=rat*0.10;
	ratead=rat-discountamt;
	gst=ratead*0.18;
	billamunt= ratead+gst;
	printf("productno, price, qty,  rat, discountamt, ratead, gst, billamunt");
	printf("\n%d  \t    %d\t  %d\t%d\t%d\t   %d\t  %d\t%d",productno,price,qty,rat,discountamt,ratead,gst,billamunt);

	return 0;
	
}