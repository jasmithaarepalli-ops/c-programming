//Longest palindromic substring (Hackathon)
#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int i,j,k,max=1,start=0,len;
    fgets(s,100,stdin);
    len=strlen(s)-1;

    for(i=0;i<len;i++)
        for(j=i;j<len;j++){
            int flag=1;
            for(k=0;k<(j-i)/2+1;k++)
                if(s[i+k]!=s[j-k]) flag=0;
            if(flag && j-i+1>max){
                max=j-i+1;
                start=i;
            }
        }
    for(i=start;i<start+max;i++)
        printf("%c",s[i]);
    return 0;
}
