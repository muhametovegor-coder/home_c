#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int temp = n; temp > 0; temp /= 10) {
            sum += temp % 10; 
        }
        printf("%d\n", sum);
    }
    return 0;
}
