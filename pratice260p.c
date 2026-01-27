#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
//이건 함수써서 바꿔본거
char lower(char upper);

int main(void) {

	char word[300];
	char wordcopy[300];
	int chardif = 0;

	printf("문자입력 :");
	gets(word);
	strcpy(wordcopy, word);
 
	// 복사본을 아스키 코드로 소문자 변환
    for (int i = 0; wordcopy[i] != '\0'; i++) {
		wordcopy[i]=lower(wordcopy[i]);
		if (word[i] >= 'A' && word[i] <= 'Z') {
			chardif++;
		}
    }

	printf("바뀐문장 :%");
    puts(wordcopy);
	printf("바뀐문자의 수 :%d\n", chardif);
	printf("원본문자 :%s", word);
	return 0;
}

//DON'T Worry, Be Happy~

char lower(char upper) {
	if (upper >= 'A' && upper <= 'Z') {
		upper = upper + 32;
		return upper;
	}
	return upper;
}