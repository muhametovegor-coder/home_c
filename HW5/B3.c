#include <stdio.h>

int main(){
	int a;
	if (scanf("%d", &a)==1){
		if (a>=100 && a<=999) {
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
