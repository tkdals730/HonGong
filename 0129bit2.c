#include <stdio.h>

int main(void) {

	int x = 1;
	// 00000001

	printf("%d\n", x << 4);
	// 00000001
	// 00010000
	printf("%d", 16 >> 2);
	// 00010000
	// 00000100
	return 0;
}