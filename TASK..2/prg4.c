#include <stdio.h>

int main()

{
	int num1, num2, product, sum;
    
   
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
    
    
	product = num1 * num2;
	sum = num1 + num2;
    
    
	if (product % sum == 0) 
{
        printf("The multiplication is divisible by the addition");
}
	else 
{
        printf("The multiplication is not divisible by the addition");
}
    
	return 0;

}