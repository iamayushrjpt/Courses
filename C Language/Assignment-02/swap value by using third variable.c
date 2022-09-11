#include<stdio.h>
int main()
{
  
    int a=5, b=8, c; 
    printf("before swap a=5,b=8\n"); 
    
    c = b;
    b = a;
    a = c;
    
    printf("after swap a=%d,b=%d",a,b);
    return 0;
}