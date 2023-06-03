#include<stdio.h>
 int main()

{
	int i=1, j, z=2;

	while ( i<=5)
	{
        j=1;
	  while ( j<=5)
          {	
	     printf("\t %d",z);
         j++;

          }
        printf("\n");	
        z+=2;
        i++;
	}
	return 0;

}