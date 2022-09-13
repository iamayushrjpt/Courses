#include<stdio.h>

int main()
{
   int number;
   printf("enter number ");
   scanf("%d",&number);

   if(number % 5==0){
   printf("number is divisible by 5");
   }
   
   
   
   else{
   printf("number is not divisible by 5");
   }
   


    return 0;
}