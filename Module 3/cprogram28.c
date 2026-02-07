//Print ASCII value of each character
#include <stdio.h>
int main() {
char str[100];
int i;
printf("Enter string: ");
gets(str);
for(i=0; str[i]!='\0'; i++)
printf("%c = %d\n", str[i], str[i]);
return 0;
}