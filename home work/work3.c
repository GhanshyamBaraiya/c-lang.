// C program to print the inverted left half pyramid pattern
// of stars
#include <stdio.h>

int main()
{
	int rows = 5;

	// first loop for printing all rows
	for (int i = 1; i < rows; i++)
     {

		// first inner loop for printing white spaces
		for (int j = 1; j < 2 * i; j++)
        {
			printf(" ");
		}

		// second inner loop for printing star *
		for (int k = 1; k < rows - i; k++) 
        {
			printf("\t%d",j);
		}
		printf("\n");
	}

	return 0;
}
