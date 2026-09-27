#include <stdio.h>

int main() {
    int a, b;
    if(scanf("%d %d", &a, &b)==2) {
    if (a>b) {
		printf("Above");
	}
	if (b>a){
		printf("Less");
	}
	if (a==b){
		printf("Equal");
	}
}
    return 0;
}
