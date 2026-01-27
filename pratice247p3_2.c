#include <stdio.h>

int main(void) {

	int A[3] = { 1, 2, 3 };
	int B[10];
	int i;
	int countB = sizeof(B) / sizeof(B[0]);

	for (i = 0; i < countB; i++) {
		if (A[i%3] % 3 == 0 ) {
			B[i] = A[2];
		}
		else if (A[i % 3] % 3 == 1) {
			B[i] = A[0];
		}
		else if (A[i % 3] % 3 == 2) {
			B[i] = A[1];
		}

	}
	for (i = 0; i < countB; i++) {
		printf("%5d", B[i]);
	}


	return 0;
}