#include <stdio.h>
// 1부터 10까지의 합을 재귀호출
// 일정 숫자까지의 합을 구해라 
int rec_func(int n);

int main(void) {
	int result = rec_func(10);
	printf("%d", result);
	return 0;
}

int rec_func(int n) {
	
	if (n == 0) {
		return 0;
	}
	
	return n + rec_func(n - 1);
}
