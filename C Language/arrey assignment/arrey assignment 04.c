#include<stdio.h>
int main(){
    int a[10],i,sum;
    sum=0;

    for(int i=0;i<10;i++){
        printf("enter element of arrey :");
        scanf("%d",&a[i]);
    }
    if(a[0]<a[1]){
        sum=a[1];
    }
    else{
        sum=a[0];
    }
   for(i=0;i<10;i++){
       if(sum>a[i]){
        continue;
       }
       else{
        sum=a[i];
       }
   }
    printf("the greatest element of arrey is %d",sum);

 return 0;
}
