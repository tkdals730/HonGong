#include <stdio.h>

int sum(int count);

int main(void) {

	sum(10);
	sum(100);
	return 0;

}

int sum(count) {
	int total = 0;
	for (int i = 0; i <= count; i++) {
		total += i;
	}
	printf("%d\n", total);
	return total;
}