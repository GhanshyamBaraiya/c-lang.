#include<stdio.h>
 int main()

{
	int i=1, j, z=1;

	do
    
	{
        j=1;

	  do

          {	
	     printf("\t %d",z);
         j++;

          } while(j<=5);

        printf("\n");	
        z+=2;
        i++;
	}while (i<=5);
    
    
	return 0;

}