
#include <stdio.h>


int main(void) {
	int res;
	printf("short의 크기 : %d\nlong의 크기 : %d\n", sizeof(short), sizeof(long));

	res = (sizeof(short) > sizeof(long)) ? 1 : 0;
	
	printf("%s\n", (res == 1) ? "short" : "long");

	printf("%d",sizeof(int));
}