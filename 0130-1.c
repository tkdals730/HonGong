#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	//자판기 번호?
	int account = 10000;

	// 계좌의 금액이 0보다 낮아지는 경우 해결
	if (account < 0) {
		account = 0;
	}

	char* menu[] = { "콜라", "사이다", "환타", "유자차" };
	

	int menu_size = sizeof(menu) / sizeof(menu[0]);
	int price[] = {1500, 1500, 1200, 1800};

	int count[] = { 3, 2, 1, 0 };
	int select_num;
	
	while (1) {
		printf("상품목록\n");
		for (int i = 0; i < menu_size; i++) {
			printf("%d. %s\n",i+1, menu[i]);	
		}

		printf("번호를 입력해주세요 : ");
		scanf("%d", &select_num);

		// 자판기 목록에 없으면
		if (select_num > menu_size ) {
			printf("잘못된 메뉴입니다.\n");
			continue;
		}
	
		// 품절 유무
		if (count[select_num-1] == 0) {
			printf("%s는 품절입니다\n", menu[select_num-1]);
			continue;
		}
		
		for (int i = 0; i < menu_size; i++) {
			if (count[i] < 0) {
				count[i] = 0;
			}
		}

		printf("카드를 넣어주세요\n");
		// 잔액을 바탕으로 출력 및 재고관리
		if (account < price[select_num - 1]) {
			printf("잔액이 %d원부족합니다\n",price[select_num-1]-account);
			continue;
		}
		if (account >= price[select_num - 1]) {
			printf("%s가 나왔습니다.\n", menu[select_num - 1]);
			printf("카드잔액 : %d\n", account - price[select_num - 1]);
			count[select_num - 1]--;
			break;
		}
	
		
		break;
	}
	return 0;
}
