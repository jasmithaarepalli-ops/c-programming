//Find length of string (without strlen)
#include <stdio.h>
int main() {
    char s[100];
    int i, len = 0;
    fgets(s, 100, stdin);
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] != '\n')
            len++;
    }
    printf("%d", len);
    return 0;
}
