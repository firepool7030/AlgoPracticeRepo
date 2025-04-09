#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	int len, s = 0;
	char ar[100000] = { '\0', };
	gets(ar);
	len = strlen(ar);
	for (int i = 0; i < len; i++) {
		if (ar[i] == '<') {
			while (ar[i] != '>') {
				printf("%c", ar[i++]);
			}
			printf(">");
			s = i + 1;
		}
		else {
			while (ar[i] != ' ' && ar[i] != '<' && ar[i] != '\0') {
				i++;
			}
			for (int j = i - 1; j >= s; j--) {
				printf("%c", ar[j]);
			}
			s = i;
			if (ar[i] == ' ') {
				printf(" ");
				s++;
			}
			else {
				i--;
			}
		}
	}
	return 0;
}