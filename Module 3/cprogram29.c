//Print characters at even index
#include <stdio.h>
int main() {
char str[100];
int i;
printf("Enter string: ");
gets(str);
for(i=0; str[i]!='\0'; i++)
if(i%2==0) printf("%c ", str[i]);
return 0;
}