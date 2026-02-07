//Rearrange so no adjacent same
#include <stdio.h>
#include <string.h>
int main(){ char s[100]; int i;
gets(s);
for(i=0;s[i+1];i++) if(s[i]==s[i+1]){ printf("Not possible"); return 0; }
printf("Possible");
}