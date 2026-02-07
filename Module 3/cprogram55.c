//Anagram check
#include <stdio.h>
int main() {
    char a[100],b[100];
    int fa[256]={0}, fb[256]={0},i;
    fgets(a,100,stdin);
    fgets(b,100,stdin);

    for(i=0;a[i]!='\0';i++) fa[a[i]]++;
    for(i=0;b[i]!='\0';i++) fb[b[i]]++;

    for(i=0;i<256;i++)
        if(fa[i]!=fb[i]){
            printf("Not Anagram");
            return 0;
        }
    printf("Anagram");
    return 0;
}
