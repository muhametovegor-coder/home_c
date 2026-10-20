#include <stdio.h>

void digits (int n) {
	printf ("%d " , n%10);
if (n>=10){
	digits (n/10);
}
}
int main () {
	int n;
	scanf ("%d" , &n);
	digits (n);
	return 0;
}
