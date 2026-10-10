#include <stdio.h>

long long sum(int n){
	long long result =0;
	for (int i=1; i<=n; i++){
		result += i;
	}
	return result;
}
int main(){
	int n;
	if (scanf("%d", &n)==1){
		printf("%lld", sum(n));
	}
	return 0;
}
	
