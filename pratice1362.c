# include <stdio.h>

int main(void) {
	int chest = 95;
	char size;

	if (chest > 100) {
		size = 'L';
	}
	else if (chest > 90 && chest <= 100) {
		size = 'M';
	}
	else {
		size = 'S';
	}

	printf("%c", size);
	return 0;
}