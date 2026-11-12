#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main() {
	char a;
	scanf("%c", &a);
	//int r = isdigit(a);
	//printf("%d", r)
	if (isupper(a)) {
		printf("%c是大写字母", a);
	}
	else {
		printf("%c是小写字母", a);
	}
	return 0;
}