#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int t = n; t > 0; t /= 10) {
            sum += t % 10; 
        }
        printf("%d\n", sum);
    }
    return 0;
}
