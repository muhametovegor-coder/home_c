#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    if (in == NULL || out == NULL) {
        return 1; 
    }
    char buf[10000];
    if (fgets(buf, sizeof(buf), in)== NULL){
		fclose(in);
		fclose(out);
		return 0;
	}
    for (int i = 0; buf[i] != '\0'; ){
		if(buf[i] == 'C' && buf[i+1] == 'a' && buf[i+2] == 'o'){
			fputs("Ling", out);
			i+=3;
		}else{
			fputc(buf[i], out);
			i++;
		}
	}

    fclose(in);
    fclose(out);
    return 0;
}
