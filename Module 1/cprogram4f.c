//for loop: 
/* Program to calculate the sum of first n natural numbers 
                     (Positive integers 1,2,3...n are known as natural numbers)*/ 
#include <stdio.h> 
int main() 
{ 
    int n, i, sum = 0; 
    printf("Enter a positive integer: "); 
    scanf("%d", &n); 
    for(i = 1; i <= n; i++) 
    { 
        sum += i;   // sum = sum + i 
    } 
    printf("Sum = %d", sum); 
    return 0; 
}