#include<stdio.h>
void maximum(int x, int y);
int main(){
    int a,b;
     printf("enter two number :");
    scanf("%d%d",&a,&b);
    maximum(a,b);
    return 0;
    }
void maximum(int x, int y){
    int n;
   if(x>y)
    printf("%d is greater",x);
    else
   printf(" %d is greater",y);

}
