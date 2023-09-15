#include <stdio.h>
#include "lib.h"

//int add(int a, int b);

int main(void) {

	int a = 1;
	int b = 2;
	int c = add(a,b);
	printf("%d + %d = %d\n", a, b, c);
	return 0;
}
