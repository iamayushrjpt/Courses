#include<stdio.h>

int main()
{
   int a, b, c;
   printf("enter number a ");
   scanf("%d",&a);

    printf("enter number b");
    scanf("%d",&b);

    printf("enter number c");
    scanf("%d",&c);




   if(a>b && a>c){
   printf("a is greater than b and c");
   }
   else if(a<b && b>c){
   printf("b is greater than a and c");
   }
   else{
   printf("c is greater than a and b");
   }
   


    return 0;
}