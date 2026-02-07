//Smallest and largest word
#include <stdio.h>
#include <string.h>
int main() {
char str[100], word[20], small[20], large[20];
int i=0,j=0;
printf("Enter sentence: ");
gets(str);
while(1) {
if(str[i]==' ' || str[i]=='\0') {
word[j]='\0';
if(strlen(word)>0) {
if(strlen(small)==0 || strlen(word)<strlen(small)) strcpy(small,word);
if(strlen(word)>strlen(large)) strcpy(large,word);
     }
j=0;
if(str[i]=='\0') break;
  } else word[j++]=str[i];
i++;
}
printf("Smallest=%s Largest=%s", small, large);
return 0;
}