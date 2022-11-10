#include<stdio.h>

void square(int a);

int main(){
    int x;
     printf("enter number :");
     scanf("%d",&x);
     square(x);
return 0 ;

}

void square(int a){
     int c;
     c = a*a;
     printf(" square is %d",c);

}
