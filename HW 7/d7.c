#include <stdio.h>

void print_range(int a, int b) {
    if (a == b) {
        printf("%d ", a);
        return;
    }

    if (a < b) {
        printf("%d ", a);
        print_range(a + 1, b);
    } 
    else {
        printf("%d ", a);
        print_range(a - 1, b); 
    }
}

int main() {
	int a, b;
    scanf("%d %d", &a, &b);
    print_range(a,b);
    return 0;
}
