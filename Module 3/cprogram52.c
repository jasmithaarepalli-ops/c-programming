//Remove spaces
#include <stdio.h>
int main() {
    char s[100], r[100];
    int i,j=0;
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
        if(s[i]!=' ')
            r[j++]=s[i];
    r[j]='\0';

    printf("%s",r);
    return 0;
}
