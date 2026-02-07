//Largest & smallest word
#include <stdio.h>
#include <string.h>
int main() {
    char s[200], word[50];
    char small[50], large[50];
    int i=0,j=0;

    fgets(s,200,stdin);
    while(s[i]!='\0'){
        if(s[i]!=' '&&s[i]!='\n')
            word[j++]=s[i];
        else{
            word[j]='\0';
            if(strlen(word)>strlen(large)||large[0]=='\0') strcpy(large,word);
            if(strlen(word)<strlen(small)||small[0]=='\0') strcpy(small,word);
            j=0;
        }
        i++;
    }
    printf("Smallest:%s\nLargest:%s",small,large);
    return 0;
}
