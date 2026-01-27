#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main(void) {

	char word[300];
	char wordcopy[300];
	int chardif = 0;
	
	printf("입력받은 문자 열 : ");
	gets(word);
	// fgets(word, sizeof(word), stdin); 실전에서는 이걸 쓴다는데?
	strcpy(wordcopy, word);
	//대문자를 소문자로 바꾸고 바뀐개수를 출력
	for (int i = 0; word[i] != '\0'; i++) {
		if (wordcopy[i] >= 'A' && wordcopy[i] <= 'Z') {
			wordcopy[i] = word[i] + 32;
			chardif++;
		}
		else
		{
			wordcopy[i] = word[i];
		}
	}


	printf("입력받은 문자 열 : ");
	puts(word);
	printf("바뀐문장 :%s\n", wordcopy);
	printf("바뀐문자의 수  :%d\n", chardif);
	
	
	return 0;
}

//DON'T Worry, Be Happy~