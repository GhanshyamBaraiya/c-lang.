#include <stdio.h>
 int main()
{

	int i=5, j;

	while (i>=1)
	
	{
        j=1;

	  while (j<=i)	
	{
	  printf("\t %d",i);
      j++;
	}
	  printf("\n" );
      i--;
	}
	  return 0;
}