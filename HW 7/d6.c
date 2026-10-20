#include <stdio.h>

void countup(int n) {
    if (n <= 0)
        return;  
    printf("%d ", n);
    countup(n - 1);   
}
int main() {
    int n;
    scanf("%d", &n);
    countup(n);
    return 0;
}
