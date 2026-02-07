//First non-repeating character
#include <stdio.h>
int main() {
    char s[100];
    int freq[256]={0},i;
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
        freq[s[i]]++;

    for(i=0;s[i]!='\0';i++)
        if(freq[s[i]]==1){
            printf("%c",s[i]);
            break;
        }
    return 0;
}
