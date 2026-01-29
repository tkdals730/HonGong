#include <stdio.h>
#include <string.h>


int main(void) {

	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");

	// 이거는 사전순서를 토대로 그 결과값을 반환
	// 아스키코드가 기준이라고 한다나 뭐래나
	// strcmp(str1, str2) str1이 str2보다 사전에 나중에 나오면 1
	// strcmp(str1, str2) str1이 str2보다 사전에 먼저 나오면 -1
	// strcmp(str1, str2) str1이 str2보다 같은 문자열이면  0

	if (strcmp(str1, str2) > 0) {
		printf("%s\n",str1);
	}
	else {
		printf("%s\n", str2);
	}

	// strncmp 함수는 비교할 문자 수를 몇번쨰 인자를 비교 할건지 설정가능
	// strncmp(str1, str2,3) 앞에서 3번째 문자가 같으면 0

	return 0;
}