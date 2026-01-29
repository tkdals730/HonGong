#include <stdio.h>

int main(void) {

	int a = 12; // 1100
	int b = 10;//  1010

	printf("%d\n",a & b);
	//  1100
	//  1010
	//  1000
	printf("%d\n", a | b);
	//  1100
	//  1010
	//  1110
	printf("%d", a ^ b);
	//  1100
	//  1010
	//  0110

	return 0;
}