#include <stdio.h>

int main(void) {

	int ary[6] = { 1, 2, 3};
	// int ary[6] = { 1, 2, 3, 0, 0, 0 };

	for (int i = 0; i < 6; i++) {
		printf("%d",ary[i]);
	}

	return 0;
}