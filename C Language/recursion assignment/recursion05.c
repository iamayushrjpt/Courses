#include<stdio.h>
int print(int a);
int main(){
    int n;
    scanf("%d",&n);
    print(n);
 return 0;
}
int print(int a){
    if(a==0){
        return a;
    }
    if(a%2==0)
     printf("all even number %d\n",a);
   1+ print(a-1);
}
