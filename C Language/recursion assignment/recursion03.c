#include<stdio.h>
int print(int a);
int main(){
    int n,k;
    scanf("%d",&n);
    print(n);
 return 0;
}
int print(int a){
    if(a==0){
        return a;
    }
     print(a-1);
    printf("%d\n",a);

}
