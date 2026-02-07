//Count vowels, consonants, digits, spaces
#include <stdio.h>
int main() {
    char s[200];
    int v=0,c=0,d=0,sp=0,i;
    fgets(s,200,stdin);

    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            c++;
        else if(s[i]>='0'&&s[i]<='9')
            d++;
        else if(s[i]==' ')
            sp++;
    }
    printf("Vowels:%d Consonants:%d Digits:%d Spaces:%d",v,c,d,sp);
    return 0;
}
