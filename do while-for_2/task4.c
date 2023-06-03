#include<stdio.h>
 int main()

{
	int i=1, j;
    char ch='A';

	do
     
	{
        j=1;

	  do
      {
        printf("\t%c",ch);
        j++;

      } while  (j<=5);

      printf("\n");
      ch++; 
      i++;
	} while (i<=5);

	return 0;

}