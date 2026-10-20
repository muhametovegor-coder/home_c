#include <stdio.h>

void digits (int n) {
if (n>=10){
	digits (n/10);
}
printf ("%d " , n%10);
}
int main () {
	int n;
	scanf ("%d" , &n);
	digits (n);
	return 0;
}
