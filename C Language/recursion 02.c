#include<stdio.h>
int fac(int a);
int main(){
    int n,k;
    scanf("%d",&n);
    k = fac(n);
    printf("%d",k);
  return 0;
 }
 int fac(int a){
     if(a==1){
        return a;
     }
     int t;
    t = a*fac(a-1);
    return t;
 }
