#include <stdio.h>

void reverse_string () {
	char txt;
	txt = getchar();
	if (txt == '.'){
		return;
	}
	reverse_string();
	printf ("%c" , txt);
}

int main () {
	reverse_string();
	return 0;
}
