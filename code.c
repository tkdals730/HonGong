#include <stdio.h>

int rec_func(int n); //1부터 n까지의 합을 반환하는 함수 

int main(void)
{
	int res;
	res = rec_func(10);
	printf("%d", res);
	return 0;
}

int rec_func(int n)
{
	int res;
	if (n == 1)
		return 1;
	else
		res = n + rec_func(n - 1);
	return res;
}