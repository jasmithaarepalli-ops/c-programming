//Count valid words (only alphabets)
#include <stdio.h>
int main() {
    char s[200];
    int i,valid=1,count=0;
    fgets(s,200,stdin);

    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '||s[i]=='\n'){
            if(valid) count++;
            valid=1;
        }
        else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))
            valid=0;
    }
    printf("%d",count);
    return 0;
}
