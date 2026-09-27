#include <stdio.h>

int main() {
    int a, b, c;
    if(scanf("%d %d %d", &a, &b, &c)==3) {
    if (a+b > c && b+c > a && a+c > b){
		printf ("YES");}
		else(printf("NO"));
}
    return 0;
}
