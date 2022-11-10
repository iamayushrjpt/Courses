#include<stdio.h>

void even(int a);

int main(){
  int x;
   printf("enter number :");
   scanf("%d",&x);
  even(x);
return 0 ;

}

void even(int a){
    if(a%2==0)
        printf("number is even");
    else
        printf("number is odd");
}
