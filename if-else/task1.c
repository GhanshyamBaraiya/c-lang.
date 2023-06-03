#include<stdio.h>
int main()
{
    float unit,total;
    printf("enter eletricity unit:");
    scanf("%f",&unit);
    if (unit<=100)
    {
        total = (unit*0.6) + 50;
    }
    else if (unit>101 && unit<=300)
    {
         total =(100*0.60)+((unit-100)*0.80) +50;
    })
    else
    {
        total = (100*0.60) + (200*0.80) + ((unit-300)*0.90) + 50;
    }
    if(total>=301)
    {
        total=total*1.15;
    }
    printf("your total bill is = %f",total);
    return 0;
}