//Maskphone number
#include <stdio.h>
int main(){ char p[20]; int i;
gets(p);
for(i=0;p[i];i++) if(i<6) printf("*"); else printf("%c",p[i]);
}