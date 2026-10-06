#include <stdio.h>

int main(){
	int a, b, i;
	long sum=0;
	if (scanf("%d %d", &a, &b)==2){
		if (a<=b && a<=100 && a>=-100 && b<=100 && b>=-100){
			for(i=a; i<=b; i++){
				sum+=i*i;
			}
			printf("%ld", sum);

		}
	}
	return 0;
}
