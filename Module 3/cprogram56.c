//Replace character
#include <stdio.h>
int main() {
    char s[100],a,b;
    int i;
    fgets(s,100,stdin);
    scanf("%c %c",&a,&b);

    for(i=0;s[i]!='\0';i++)
        if(s[i]==a)
            s[i]=b;

    printf("%s",s);
    return 0;
}
