#include<stdio.h>
 int main(){
    int i,n,sum,sum1;
    sum=0;
    sum1=0;
    printf("enter size of arrey");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter element of arrey :");
        scanf("%d",&a[i]);

        if(a[i]%2==0 ){
                sum = sum + a[i];
        }
        else{
            sum1 = sum1 + a[i];

        }
    }
         printf("sum of all even number is %d\t",sum);
         printf("sum of all odd number is %d",sum1);
  return 0;

 }
