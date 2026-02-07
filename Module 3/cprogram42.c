//Password strength
#include <stdio.h>
int main(){ char p[100]; int u=0,l=0,d=0,s=0,i;
gets(p);
for(i=0;p[i];i++){
if(p[i]>='A'&&p[i]<='Z')u++;
else if(p[i]>='a'&&p[i]<='z')l++;
else if(p[i]>='0'&&p[i]<='9')d++;
else s++;
}
if(u&&l&&d&&s) printf("Strong"); else printf("Weak");
}