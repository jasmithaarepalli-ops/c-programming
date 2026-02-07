//1. Replace all vowels with '*'
#include <stdio.h>
int main() {
char str[100];
int i;
printf("Enter string: ");
gets(str);
for(i=0; str[i]!='\0'; i++) {
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u' ||
str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
str[i] = '*';
}
printf("Result: %s", str);
return 0;
}