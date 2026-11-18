#include <stdio.h>
#include <string.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    
    if (in == NULL || out == NULL) {
        return 1; 
    }
    
    int N;
    fscanf(in, "%d", &N);
    char res[30];
    char letter = 'A';
    char digit = '2';
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            res[i] = letter;
            letter++;
        }
        else {
            res[i] = digit;
            digit += 2;
            if (digit > '8') {
                digit = '2';
            } 
        } 
    } 
    
    res[N] = '\0';
    
    fprintf(out, "%s\n", res);
    fclose(in);
    fclose(out);
    return 0;
} 

