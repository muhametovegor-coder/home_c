#include <stdio.h>

int sum_digits (int n) {
if (n<10){
	return n;
}
	return (n%10) + sum_digits(n/10);
}
int main () {
	int n;
	scanf ("%d" , &n);
	sum_digits (n);
	printf("%d",(n%10) + sum_digits(n/10));
	return 0;
}
