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
    
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
    
    int in_word = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            in_word = 1;
            fprintf(out, "%c", s[i]);
        }
        else {
            if (in_word == 1) {
                in_word = 0;
                fprintf(out, "\n");
            }
        }
    }
    
    if (in_word == 1) {
        fprintf(out, "\n");
    }
   
    fclose(in);
    fclose(out);
    return 0;
}
