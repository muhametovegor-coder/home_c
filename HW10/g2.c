#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    if (in == NULL || out == NULL) {
        return 1; 
    }
    char s[10005];
    fgets(s, sizeof(s), in);
    int small = 0;
    int big = 0;
    for(int i = 0; s[i] != '\0'; i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			small++;
		}
		if(s[i] >= 'A' && s[i] <= 'Z'){
			big++;
		}
	}
   
    fprintf(out, "%d %d\n", small, big);
    fclose(in);
    fclose(out);
    return 0;
} 

