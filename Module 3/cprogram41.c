//Extract username from email
#include <stdio.h>
int main(){ char e[100]; int i;
gets(e);
for(i=0;e[i]!='@';i++) printf("%c",e[i]);
}