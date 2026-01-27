#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//이건 2부터 입력받은 숫자의 갯수까지 반복
	
	int number;
	int primeNum;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &number);
	//이건 2부터 입력받은 숫자의 갯수까지 반복
	//9
	int line = 0;

	for (int i = 2; i <= number; i++) {
		primeNum = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				primeNum = 0;
			}
			}
		if (primeNum == 1) {
			printf("%4d ", i);
			line=line+1;
			if (line % 5 == 0) {
				printf("\n");
			}
		}
		

	}
	// 자일단 5를입력 
	//그리고 이게 2부터 시작해서 5가 될때까지 하나씩 나눠봐 2 3 4
	//이게 나누어떨어지는게없어? 그럼 소수 출력 
	//2부터 6은 4개
	//그럼 결론적으로 2 부터 n번까지는 n-2개
	return 0;
}