#include <stdio.h>

int fac(int a);
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    fac(n);
    return 0;
}
int fac(int a){
   int i = a;
   int fac = 1;
    while(i>=1){
                fac = fac*i;
        printf("%d\n",fac);
        i--;
    }
    return fac ;
}
