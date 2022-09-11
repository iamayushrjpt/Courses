#include<stdio.h>
int main()
{
  
    int a=5, b=8;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b; 
b=a-b;   
a=a-b;       
printf("\nAfter swap a=%d b=%d",a,b);    
    return 0;
}