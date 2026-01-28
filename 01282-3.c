#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
"#### 문제
몫과 나머지 입력 프로그램
키보드로 입력한 양수를 4로 나누어 몫과 나머지를 변수에 저장하는 함수를 만듭니다.다음 main 함수와 실행결과를 참고하여 작성합니다.

#### main함수
int main(void)
{
    int mod, rem;
    func(&mod, &rem);
    printf(""몫 : % d, 나머지 : % d"", mod, rem);

    return 0;
}

#### 실행결과
양수 입력 : 9
몫 : 2, 나머지 : 1"
*/
int func(int* mod, int*rem);

int main(void) {

    int mod, rem;
    func(&mod,&rem);

    return 0;
}
int func(int* mod, int* rem) {
    int number;
    printf("양수 입력: ");
    scanf("%d",&number);

    mod = number / 4;
    rem = number % 4;
    printf("몫 : %d", mod);
    printf("나머지 : %d", rem);
}