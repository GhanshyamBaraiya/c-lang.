#include<stdio.h>
int main()
{
     int a[10], b[10];
     
    int i,total=0;
    for (i=0; i<10; i++)
    {
        printf("enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
      

    printf("\n----array is----\n");
    for(i=0;i<10;i++)
    {
        printf("\n %d",i+1,a[i]);
    
        total=total+a[i];
    }
    return 0;
}

   
    