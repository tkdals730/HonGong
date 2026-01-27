#include <stdio.h>

int main(void) {
	
	int i = 0;
	int cnt;
	printf("횟수를 입력하세요. : ");
	scanf_s("%d", &cnt);
	do  {
		printf("Be happy\n");
		i++;
	} while (i < cnt);
	
	i = 0;
	printf("횟수를 입력하세요. : ");
	scanf_s("%d", &cnt);
	while (i < cnt){
		printf("Be happy\n");
		i++;
		}

	printf("횟수를 입력하세요. : ");
	scanf_s("%d", &cnt);
	for (int k = 0; k < cnt; k++) {
		printf("Be happy\n");
	}

	return 0;
}