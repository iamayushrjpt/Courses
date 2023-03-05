#include<stdio.h>
int sum(int a);
int main(){
    int n,k;
    scanf("%d",&n);
    k = sum(n);
    printf("%d",k);
  return 0;
 }
 int sum(int a){
     if(a==1){
        return a;
     }
     int t;
    t = a+sum(a-1);
    return t;
 }
