

   
    #include<stdio.h>
int main()
{
     int a[10];
     
    int total=0,i;

    for (i=0; i<10; i++)
    {
        printf("enter a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
printf("odd element....");

      for (i=0; i<10; i++)
    {
        if (a[i] % 2 ==1)
        {
            printf("\n %d",a[i]);
        }
    }
    printf(" \ntotal ");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        total=total+a[i];
    }
    printf("\n:%d\n",total);
    return 0;
}
    
    
    


   
    