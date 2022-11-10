#include<stdio.h>
void cube(int a);
int main(){
    int x;
    printf("enter number :");
    scanf("%d",&x);
    cube(x);
return 0;
}
void cube(int a){
    int c;
    c = a*a*a;
    printf("cube is %d",c);
}
