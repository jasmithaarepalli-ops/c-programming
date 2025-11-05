#include <stdio.h>
int main() {
int a, b;
 float p,r,t,si;
 printf("Enter the principal, rate, time: ");
 scanf("%f %f %f" , &p,&r,&t);
 si= (p*t*r)/100;
 printf("simple interest = %.2f", si);

 return 0;
}