#include <stdio.h>
void product();
int main()
{
    printf("hiiii\n");
    product();
    printf("\nhello");
}
void product()
{
    int a,b,t;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    t = a * b;
    printf("product is :%d",t);
}