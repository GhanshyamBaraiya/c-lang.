#include<stdio.h>
int main()
{
     int a[10], b[10];
     
    int i;
    for (i=0; i<5; i++)
    {
        printf("enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
      for (i=0; i<5; i++)
    {
        printf("\tenter b[%d]:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n  a                   b   \n");
    for(i=0;i<5;i++)
    {
        printf("\n a[%d]:%d" "\t b[%d]:%d",i+1,a[i],i+1,b[i]);
    }

     
}