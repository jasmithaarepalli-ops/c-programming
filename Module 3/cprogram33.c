//Palindrome ignoring spaces
#include <stdio.h>
#include <string.h>
int main() {
char str[100], temp[100];
int i,j=0;
printf("Enter string: ");
gets(str);
for(i=0; str[i]!='\0'; i++)
if(str[i]!=' ') temp[j++]=str[i];
temp[j]='\0';
int len=strlen(temp);
for(i=0;i<len/2;i++)
if(temp[i]!=temp[len-i-1]) { printf("Not Palindrome"); return 0; }
printf("Palindrome");
return 0;
}