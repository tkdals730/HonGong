#include <stdio.h>

int main(void) {

	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;
	int countB = sizeof(B) / sizeof(B[0]);

	for (i = 0; i < countB; i++) {
		B[i] = A[i % 3];
	}
	for (i = 0; i < countB; i++) {
		printf("%5d", B[i]);
	}


	return 0;
}