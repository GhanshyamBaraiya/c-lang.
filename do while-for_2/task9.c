#include<stdio.h>
 int main()

{
	int i=1, j, k=11;
	while(i<=5)
	{
        j=1;
	  while (j<=5)
          {	
	     printf("\t %d",k);
         j++;
	    
          }
		 
        printf("\n ");	
        k+=11;
        i++;
	}
	return 0;

}