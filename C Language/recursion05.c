#include<stdio.h>
int print(int a);
int main(){
    int n,k;
    scanf("%d",&n);
    k=print(n);

 return 0;
}
int print(int a){
    if(a==0){
        return a;
    }
    if(a%2==0)
     printf("%d\n",a);
    int v;
    v= 1+ print(a-1);
    return v;
}
