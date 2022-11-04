#include<stdio.h>

void even(int a);

int main(){
    int x;
  even(x);
return 0 ;

}

void even(int a){
     int c;
     printf("enter number");
     scanf("%d",&c);
    if(c%2==0)
        printf("number is even");
    else
        printf("number is odd");
}
