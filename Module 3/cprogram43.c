//Domain frequency
#include <stdio.h>
#include <string.h>

int main() {
    char email[10][50], domain[10][50];
    int n, i, j, count;

    printf("Enter number of emails: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter email %d: ", i+1);
        scanf("%s", email[i]);

        // extract domain
        for(j = 0; email[i][j] != '@'; j++);
        strcpy(domain[i], email[i] + j + 1);
    }

    for(i = 0; i < n; i++) {
        count = 1;
        if(domain[i][0] == '\0') continue;

        for(j = i + 1; j < n; j++) {
            if(strcmp(domain[i], domain[j]) == 0) {
                count++;
                domain[j][0] = '\0';   // mark counted
            }
        }
        printf("%s = %d\n", domain[i], count);
    }

    return 0;
}
