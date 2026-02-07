//Compare two strings (no strcmp)
#include <stdio.h>
int main() {
    char a[100],b[100];
    int i=0;
    fgets(a,100,stdin);
    fgets(b,100,stdin);

    while(a[i]==b[i] && a[i]!='\0') i++;

    if(a[i]>b[i]) printf("String 1 is greater");
    else if(a[i]<b[i]) printf("String 2 is greater");
    else printf("Both are equal");

    return 0;
}
