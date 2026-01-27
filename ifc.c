#include <stdio.h>

int main(void) {

	int a = 20;
	int b = 0;

	if (a > 0) {
		a = 1;
	}
	else {
		a = -1;
	}


	printf("%d", a);

	return 0;
}