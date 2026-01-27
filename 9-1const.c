#include <stdio.h>

int main(void) {

	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a의값 : %d\n", *pa);

	pa = &b;
	printf("변수 b의값 : %d\n", *pa);

	pa = &a;
	*pa = 20;
	printf("변수 a의값 : %d\n", *pa);

	
	//const 예약어를 통해 포인터에 사용하면 이는 가리키는 변수의 값을 바꿀 수 없게 할 수 있다. 변수에 사용하는 것과는 다른 의미

	return 0;
}