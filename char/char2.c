#include <stdio.h>

int main() 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')

    {  
        ch = ch - 'a' + 'A';       
    } 
	
	else if (ch >= 'A' && ch <= 'Z') 
	
	{  
        ch = ch - 'A' + 'a';       
    } 
	
	else 

	{  
        printf("Invalid input!\n");
        return 0;
    }

    printf("%c\n", ch);

    return 0;
}






