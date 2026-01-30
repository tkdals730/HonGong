#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	//자판기 번호?
	while (1) {

		int cola_count = 4;
		int cider_count = 3;
		int fanta_count = 2;
		int yuja_tea_count = 0;
		int select_num;

		printf("상품목록\n");
		printf("1. 콜라\n");
		printf("2. 사이다\n");
		printf("3. 환타\n");
		printf("4. 유자차\n");

		printf("상품을 선택해주세여 : ");
		scanf("%d", &select_num);
		if (select_num == 1 && cola_count ==0) {
			printf("재고가 없습니다. 다시 선택해주세요\n");
			continue;
		}
		else if (select_num == 2 && cider_count == 0) {
			printf("재고가 없습니다. 다시 선택해주세요\n");
			continue;
		}
		else if (select_num == 3 && fanta_count == 0) {
			printf("재고가 없습니다. 다시 선택해주세요\n");
			continue;
		}
		else if (select_num == 4 && yuja_tea_count == 0) {
			printf("재고가 없습니다. 다시 선택해주세요\n");
			continue;
		}

		break;

	}

	return 0;
}