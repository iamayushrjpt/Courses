#include<stdio.h>
int main(){

  
    int num;
 
    printf("enter number :");
    scanf("%d", &num);
    if (num > 0)
        printf("num is positive \n", num);
        
    else if(num==0)  
        printf("num is  equal to zero");
        
        
        
        
    else
        printf("num is a negative  \n", num);


 return 0;
}