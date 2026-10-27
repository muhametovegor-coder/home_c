#include <stdio.h>

int n;
int max1, max2;
int main(){
	scanf ("%d", &max1);
	scanf("%d", &n);
	if (n > max1 ) {
		max2 = max1;
		max1 = n; 
	}
		else {
		  max2 = n;
	}
	for (int i = 2; i < 10; i++){
		if (scanf("%d", &n) !=1){
			 break;
		}
		if (n > max1){
			max2 = max1;
			max1 = n;
		}
		else if (n > max2){
			max2 = n;
		}
	}
	printf("%d", max1+max2);
	return 0;
}
