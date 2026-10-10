#include <stdio.h>

unsigned long long sum(int n) {
    return 1ULL << (n - 1);
}
int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n >= 1 && n <= 64) {
            printf("%llu\n", sum(n));
        }
    }
    return 0;
}

