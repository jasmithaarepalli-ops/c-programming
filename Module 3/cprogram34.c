//Rotate string left by N
#include <stdio.h>
#include <string.h>
int main() {
char str[100];
int n,i;
printf("Enter string: ");
gets(str);
printf("Enter N: ");
scanf("%d", &n);
int len=strlen(str);
for(i=n;i<len;i++) printf("%c",str[i]);
for(i=0;i<n;i++) printf("%c",str[i]);
return 0;
}