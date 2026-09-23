#include <stdio.h>

int main(){
int a,b,c;
if (scanf("%d %d %d", &a, &b, &c)==3){
printf("(%.2f+%.2f+%.2f)/3=%.2f\n",(float)a,(float)b,(float)c, (a+b+c)/3.0);
}
return 0;
}
