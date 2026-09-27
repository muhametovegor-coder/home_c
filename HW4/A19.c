#include <stdio.h>

int main() {
    int a, max;
    if (scanf("%d", &a) == 1) {
        int sot = a / 100;    
        int des = (a / 10) % 10; 
        int ed = a % 10;       
        max = sot > des ? sot : des;
        max = max > ed ? max : ed;
        printf("%d\n", max);
    }
    return 0;
}
