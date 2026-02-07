/* C program for receiving an input from the user at runtime and 
printing it */ 
#include <stdio.h> 
int main() 
{ 
int num; 
printf("Enter a number: "); 
scanf("%d", &num); 
printf("You entered: %d\n", num); 
return 0;
}