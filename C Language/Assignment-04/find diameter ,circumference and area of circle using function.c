#include<stdio.h>
void diameter(int a);
void circumference(int a);
void area(int a);
int main(){
    int radius;
    printf("enter radius :");
    scanf("%d",&radius);

    diameter(radius);
    circumference(radius);
    area(radius);
    return 0;
    }
void diameter(int a){
    int d;
    d = 2*a;
    printf("diameter is %d\n",d);
}


void circumference(int a){
    float c;
    c = 2*3.14*a;
    printf("circumference is %f\n",c);
}


void area(int a){
    float area;
    area = 3.14*a*a;
     printf("area is %f\n",area);
}
