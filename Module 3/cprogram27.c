//Check valid identifier
#include <stdio.h>
int main() {
    char id[50];
    int i, valid=1;
    printf("Enter identifier: ");
    gets(id);
    if(!( (id[0]>='A'&&id[0]<='Z') || (id[0]>='a'&&id[0]<='z') || id[0]=='_' ))
        valid=0;
    for(i=1; id[i]!='\0'; i++) {
        if(!( (id[i]>='A'&&id[i]<='Z') || (id[i]>='a'&&id[i]<='z') ||
              (id[i]>='0'&&id[i]<='9') || id[i]=='_' )) {
            valid=0; break;
        }
    }
    if(valid) printf("Valid Identifier");
    else printf("Invalid Identifier");
    return 0;
}