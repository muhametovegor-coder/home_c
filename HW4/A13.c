#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int minus = a - b;         
        printf("%d\n", minus);
    }
    return 0;
}
