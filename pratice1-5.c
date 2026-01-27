#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
"#### 문제
다음의 main함수와 실행결과를 참고하여 함수를 추가하고 프로그램을 완성합니다.
```c
int main(void)
{
    int sel;

    sel = disp_menu();
    printf(""선택된 메뉴는 % d번 입니다. \n"", sel);

    return 0;
}
```

#### 실행결과
1. 볶음짬뽕
2. 콩나물국밥
3. 바지락칼국수

#메뉴를 선택하세요 : 2 (Enter)
선택된 메뉴는 2번입니다. "
*/

int disp_menu();
int totalcoin(int menu);
int main(void) {
    int sel;
    int price;
    int sum = 0;

    while ( 1 == 1) {
        sel = disp_menu();
        price = totalcoin(sel);
        if (sel >3) {
            printf("\n");
            break;
        }
        printf("선택된 메뉴는 %d번 입니다.\n\n", sel);
        sum = sum + price;
    }

    printf("총 금액 : %d\n", sum);
    return 0;
}

int disp_menu() {
    printf("메뉴판\n");
    printf("1. 볶음짱봉\n");
    printf("2. 콩나물국밥\n");
    printf("3. 바지락 칼국수\n");

    int menu;
    printf("메뉴를 선택하세여 : ");
    scanf("%d",&menu);
    return menu;

}

int totalcoin(int sel) {
    int price = 0;
    if (sel == 1) {
        price = 10000;
    }
    else if (sel == 2) {
        price = 5000;
     }
    else if (sel == 3) {
        price = 8000;
    }
    return price;
}