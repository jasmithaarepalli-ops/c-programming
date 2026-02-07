//Check string rotation
#include <stdio.h>
#include <string.h>
int main(){
char a[100],b[100],temp[200];
gets(a); gets(b);
strcpy(temp,a); strcat(temp,a);
if(strstr(temp,b)) printf("Rotation"); else printf("Not Rotation");
}