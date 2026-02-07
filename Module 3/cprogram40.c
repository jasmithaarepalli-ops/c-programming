// Email validation
#include <stdio.h>
#include <string.h>

int main() {
    char e[100];

    printf("Enter email ID: ");
    scanf("%s", e);   

    if (strchr(e, '@') && strchr(e, '.'))
        printf("Valid Email");
    else
        printf("Invalid Email");

    return 0;
}
