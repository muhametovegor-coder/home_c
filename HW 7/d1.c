#include <stdio.h>

long long sum(int n) {
    if (n <= 0){
        return 0;
	}
	return n+sum(n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    long long result = sum (n);
    printf("%lld ", result);

        return 0;
}
