#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; 
    }    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
}
int main() {
    int a;
    if (scanf("%d", &a) == 1) {
        if (is_prime(a)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
