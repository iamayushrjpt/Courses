#include<stdio.h>
int main()
{
  
    int a=5, b=8; 
    printf("before swap a=5,b=8\n"); 
    a = a+b;
    
    b = a-b;
    
    a = a-b;
    
    printf("after swap a=%d,b=%d",a,b);
    return 0;
}