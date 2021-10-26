#include <stdio.h>

int mystrlen(char s[]) {
	int i = 0;
	for (i=0; s[i]!='\0'; i++) {
		;
	}
	return i;

}

int main() {
	char s[] = "FFFFFFFF";
	int len = mystrlen(s);
	printf("len=%d\n", len);
}
