#include <stdio.h>

int  reverse(int num) {
    int reversed_num=0 ;
   while(num > 0)
 {
        reversed_num = (reversed_num * 10) + (num % 10);
        num /= 10;
    }
    return reversed_num;
}

int main() {
    int x = 15423;
    int reversed_x= reverse (x);
    printf(" original  number: %d\n", x);
    printf("Reversed number: %d\n",reversed_x);
    
}