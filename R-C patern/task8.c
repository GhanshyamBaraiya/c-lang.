#include<stdio.h>
 int main()

{
	char i, j,k='A';
	for(i=1; i<=5; i++)
	{
	  for(j=5; j>=i; j--)
          {	
	     printf("\t %c",k);
	     k++;
          }
        printf("\n");	
	}
	return 0;

}