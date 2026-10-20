#include <stdio.h>

void ds (int n) {
if (n>=2){
	ds (n/2);
}
	printf ("%d " , n%2);

}
int main () {
	int n;
	scanf ("%d" , &n);
	ds (n);
	return 0;
}
