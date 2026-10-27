#include <stdio.h>

int n;
int main(){
	int index_min = 0;
	int index_max = 0;
	int min;
	scanf ("%d", &min);
	int max = min;
	for (int i = 1; i <5; i++){
		scanf("%d", &n);
		if (n < min ) {
			min = n; 
			index_min = i;
		}
		if (n > max ) {
			max = n;
			index_max = i;
		}
}
	printf("%d %d %d %d", index_max, max, index_min, min);
}
