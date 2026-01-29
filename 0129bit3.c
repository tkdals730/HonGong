#include <stdio.h>

int main(void) {

	unsigned char value = 0b10100101;
	
	value |= (1 << 1);
	// 10100101
	// 00000001
	// 10100111
	printf("%d\n", value);

	value &= ~(1 << 2);

	// 10100111
	// 00000100
	// 11111011

	// 10100111
	// 11111011
	// 10100011
	printf("%d", value);

	return 0;
}