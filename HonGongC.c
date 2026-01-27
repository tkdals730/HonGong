#define _CRT_SECURE_NO_WARNINGS //이거는 스캔으로 주의 줄때 무시가능한거
#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 해더 파일 추가

//자신의 학번 이름 학점을 출력하는 프로그램

int main(void) {
	printf("학번 : %d\n", 32165);
	printf("이름 : %s\n", "이상민");
	printf("학점 : %.1lf\n", 3.5);
	printf("학점 : %c\n", 'B');

	unsigned int a;

	a = 4294967295;
	printf("%u\n", a);
	a = -1;
	printf("%u\n", a);

	//여기에서 왜 길이가 5인데 6으로한거냐 컴파일러가 문자열의 끝에 널문자를 자동으로 추가하니까 더 여유롭게한다.
	char fruit[8] = "apple";

	char fruits[20] = "straberry";

	printf("딸기 : %s\n", fruits);

	strcpy(fruit, "banana");

	printf("과일 : %s\n", fruit);



	//국어 영어 수학 점수 저장 변수 70 80 90
	//총점ㅇ,ㄹ 저장변수 TOT 합구하고 평균 출력
	
	int kor = 70;
	int eng = 80;
	int mat = 90;

	int tot = kor + eng + mat;



	printf("국어 : %d, 수학 : %d, 영어 : %d\n",kor, mat, eng);
	printf("총점 : %d\n",tot);
	


	//scanf("%d", &변수)
	int scanA;
	printf("숫자입력 : ");
	scanf_s("%d", &scanA);
	printf("입력받은 숫자 : %d\n", scanA);

	char ch;
	printf("문자입력 : ");
	scanf_s(" %c", &ch, 1);
	printf("입력받은 문자 %c의 아스키코드 값은 %d입니다.\n", ch, ch);


	return 0;
}