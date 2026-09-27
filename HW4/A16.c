#include <stdio.h>

int main() {
    int a;
    if(scanf("%d", &a)==1) {
    if (a == 12 || a==1 || a==2) {
        printf("winter");      
    } 
    if (a == 3 || a==4 || a==5) {
        printf("spring");
	}  
    if (a == 6 || a==7 || a==8) {
        printf("summer");
	}  
    if (a == 9 || a==10 || a==11) {
        printf("autumn");  
    }
}
    return 0;
}
