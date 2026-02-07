//Minimum deletions for palindrome
#include <stdio.h>
#include <string.h>
int main(){ char s[100]; gets(s);
int i,len=strlen(s),cnt=0;
for(i=0;i<len/2;i++) if(s[i]!=s[len-i-1]) cnt++;
printf("Min deletions=%d",cnt);
}