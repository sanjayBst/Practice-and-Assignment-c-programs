// swap two numbers without using third variable

#include<stdio.h>
void main()
{
    int a,b ;
    printf("enter two numbers = ");
    scanf("%d%d",&a,&b);
    printf("before swap a = %d and b = %d ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap a = %d and b = %d ",a,b);
    getc;
  
}