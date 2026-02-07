//Remove duplicates (keep order)
#include <stdio.h>
int main() {
    char s[100];
    int seen[256]={0},i;
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++){
        if(!seen[s[i]]){
            printf("%c",s[i]);
            seen[s[i]]=1;
        }
    }
    return 0;
}
