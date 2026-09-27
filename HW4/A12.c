#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) == 1) {
        int sot = a / 100;    
        int des = (a / 10) % 10; 
        int ed = a % 10;       
        int przvd = sot * des * ed;
        printf("%d\n", przvd);
    }
    return 0;
}
