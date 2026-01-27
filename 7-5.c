#include <stdio.h>

void fruit(int count);

int main(void) {

	fruit(1);

	return 0;
}

// 재귀호출함수는 저런식으로 끝내줘야 한다.
void fruit(int count) {
	
	printf("apple\n");
	if (count == 3) {
		return;
	}
	fruit(count + 1);
	printf("jam\n");
	
}