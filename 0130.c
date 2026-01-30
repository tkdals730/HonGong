#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	//자판기 번호?
	int account = 10000;

	
	while (1) {
		
		int cola_price = 1500;
		int cider_price = 1500;
		int fanta_price = 1200;
		int yuja_tea_price = 1700;

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
		// 재고가 없을경우
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


		// 카드 잔액이 부족할 경우
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
		else if (account < yuja_tea_price && select_num == 4) {
			printf("잔액이 부족합니다.\n");
			continue;
		}
		

		// 잔액이 있을떄
		if (account >= cola_price && select_num == 1) {
			printf("콜라가 나왔습니다.\n");
			account -= cola_price;
			cola_count--;
			break;
		}
		else if (account >= cider_price && select_num == 2) {
			printf("사이다가 나왔습니다.\n");
			account -= cider_price;
			cider_count--;
			break;
		}
		else if (account >= fanta_price && select_num == 3) {
			printf("환타가 나왔습니다.\n");
			account -= fanta_price;
			fanta_count--;
			break;
		}
		else if (account >= yuja_tea_price && select_num == 4) {
			printf("유자차가 나왔습니다.\n");
			account -= yuja_tea_price;
			yuja_tea_price--;
			break;
		}

	}
	printf("카드 잔액은 %d원 입니다.\n", account);
	return 0;
}