#include <stdio.h>

int n;
int main(){
	int min;
	scanf ("%d", &min);
	for (int i = 0; i <4; i++){
		scanf("%d", &n);
		if (n < min ) min = n;
	}
	printf("%d", min);
}
