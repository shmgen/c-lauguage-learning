#include <stdio.h>
void main() {
	union mama {
		char a;
		int b;
		struct {
			char c;
			double d;
		}u;
	}f;
	printf("%d\n",sizeof(f));
}