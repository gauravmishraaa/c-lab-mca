#include<stdio.h>
int main(){
int a, b;
printf("enter the number1");
scanf("%d",&a);
printf("enter the number2");
scanf("%d",&b);

int temp = 0;
temp = a;
a=b;
return temp;

}