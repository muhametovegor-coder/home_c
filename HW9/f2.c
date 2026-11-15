#include <stdio.h>

void count_and_print_digits(const char *str) {
    int counts[10] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            counts[digit]++;
        }
    }
    
    for (int i = 0; i <= 9; i++) {
        if (counts[i] > 0) {
            printf("%d %d\n", i, counts[i]);
        }
    }
}

int main() {
    char N[1005];
    
    scanf("%s", N); 
        count_and_print_digits(N);
    
    return 0;
}
