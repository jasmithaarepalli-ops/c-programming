//Count uppercase, lowercase, digits, special characters
#include <stdio.h>
int main() {
char str[100];
int u=0,l=0,d=0,s=0,i;
printf("Enter string: ");
gets(str);
for(i=0; str[i]!='\0'; i++) {
if(str[i]>='A' && str[i]<='Z') u++;
else if(str[i]>='a' && str[i]<='z') l++;
else if(str[i]>='0' && str[i]<='9') d++;
else s++;
}
printf("Uppercase=%d Lowercase=%d Digits=%d Special=%d",u,l,d,s);
return 0;
}