#include <stdio.h>

void print_digit(char s[]) {
    int counts[10] = {0};
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            counts[digit]++;
        }
    }
    
    for (int i = 0; i <= 9; i++) {
        if (counts[i] > 0) {
            printf("%d - %d\n", i, counts[i]);
        }
    }
}
