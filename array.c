#include <stdio.h>

int main(void) {
	int arr[3] = {20, 30};
	printf("%d\n",arr);
	
	int arr2[5];
	int len = sizeof(arr2) / sizeof(arr2[0]);
	printf("%d\n", len);

	printf("%d", sizeof(arr2));
	return 0;
}