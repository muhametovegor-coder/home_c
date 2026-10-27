#include <stdio.h>

int n;
int sum = 0;
int main(){
	for (int i = 0; i < 10; i++){
		scanf("%d", &n);
		if (n > 0)
		sum+=n;	
	}
	printf ("%d", sum);
	return 0;
}
