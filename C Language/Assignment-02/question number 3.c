#include<stdio.h>
int main(){

  int n, sum=0, lastDigit;

printf("Enter number = ");

scanf("%d", &n);



lastDigit = n % 10;



printf("last digit = %d", lastDigit);

 return 0;
}