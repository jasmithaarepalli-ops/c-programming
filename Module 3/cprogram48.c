//Reverse a string (no built-ins)
#include <stdio.h>
int main() {
    char s[100];
    int i,len=0;
    fgets(s,100,stdin);

    while(s[len]!='\0') len++;
    for(i=len-2;i>=0;i--)
        printf("%c",s[i]);
    return 0;
}
