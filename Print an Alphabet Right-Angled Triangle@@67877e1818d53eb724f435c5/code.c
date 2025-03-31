#include<stdio.h>
int main() {
    char n;
    scanf(" %c", &n); // Space before %c to ignore any whitespace

    for(char i = 'A'; i <= n; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}