#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	//자판기 번호?
	while (1) {
		int cola_price = 1500;
		int cider_price = 1500;
		int fanta_price = 1200;
		int yuja_tea__price = 1700;

		int cola_count = 4;
		int cider_count = 3;
		int fanta_count = 2;
		int yuja_tea_count = 0;
		int select_num;

		int account = 10000;

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
		else if (select_num > 4) {
			printf("번호를 다시 입력해주세여\n");
			continue;
		}

		printf("카드를 넣어주세요\n");
		
		if (account < cola_price && select_num == 1) {
			printf("잔액이 부족합니다.\n");
			continue;
		}
		else if (account < cider_price && select_num == 2) {
			printf("잔액이 부족합니다.\n");
			continue;
		}
		else if (account < fanta_price && select_num == 3) {
			printf("잔액이 부족합니다.\n");
			continue;
		}
		else if (account < yuja_tea__price && select_num == 4) {
			printf("잔액이 부족합니다.\n");
			continue;
		}
		

	}

	return 0;
}