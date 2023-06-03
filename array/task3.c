#include<stdio.h>
int main()
{
     int a[10], b[10];
     
    int i;
    for (i=0; i<5; i++)
    {
        printf(":",i+1);
        scanf("%d",&a[i]);
    }
      for (i=0; i<5; i++)
    {
        printf("\t:",i+1);
        scanf("%d",&b[i]);
    }
    printf("\n\t(a)\t\t(b)\t   total of a=b\n");
    for(i=0;i<5;i++)
    {
        printf("\n \t%d\t      %d\t\t        %d",a[i],b[i],a[i]+b[i]);
    }
    printf("\n");

    return 0;
}