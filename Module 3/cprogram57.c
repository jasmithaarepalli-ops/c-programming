//Print all substrings
#include <stdio.h>
int main() {
    char s[100];
    int i,j,k;
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
        for(j=i;s[j]!='\0';j++){
            for(k=i;k<=j;k++)
                printf("%c",s[k]);
            printf("\n");
        }
    return 0;
}
