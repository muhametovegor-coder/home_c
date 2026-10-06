#include <stdio.h>

int main(){
	int a, b, i;
	if (scanf("%d %d", &a, &b)==2){
		if (a<=b && a<=100 && a>=-100 && b<=100 && b>=-100){
			for(i=a; i<=b; i++){
				printf("%d ", i*i);
			}
		}
	}
	return 0;
}
