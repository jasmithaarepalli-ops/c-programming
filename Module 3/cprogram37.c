//Caesar Cipher
#include <stdio.h>
int main(){
char s[100]; int k,i;
gets(s); scanf("%d",&k);
for(i=0;s[i];i++){
if(s[i]>='a'&&s[i]<='z') s[i]=(s[i]-'a'+k)%26+'a';
else if(s[i]>='A'&&s[i]<='Z') s[i]=(s[i]-'A'+k)%26+'A';
}
printf("%s",s);
}