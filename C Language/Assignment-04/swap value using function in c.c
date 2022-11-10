#include<stdio.h>
void swap(int a,int b);

int main(){
  int a,b,s;

      printf("enter number a :");
      scanf("%d",&a);
      printf("enter number b :");
       scanf("%d",&b);

   swap(a,b);
    return 0;
    }

void swap(int a,int b){
    int c;

    c  = a;
    a = b;
    b = c;

    printf("after swap value  a is %d\n",a);
    printf("after swap value  b is %d",b);
}

