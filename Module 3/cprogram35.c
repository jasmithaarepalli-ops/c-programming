//Longest palindromic substring (basic)
#include <stdio.h>
#include <string.h>
int isPal(char s[], int l, int r){ while(l<r) if(s[l++]!=s[r--]) return 0; return 1; }
int main(){
char s[100]; int i,j,start=0,max=1;
gets(s);
int n=strlen(s);
for(i=0;i<n;i++)
for(j=i;j<n;j++)
if(isPal(s,i,j) && j-i+1>max){ start=i; max=j-i+1; }
for(i=start;i<start+max;i++) printf("%c",s[i]);
}