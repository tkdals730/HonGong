#include <stdio.h>

int main(void) {

	int seat = 70;
	int visitor = 65;

	float visitRate;
	visitRate = (float)visitor / seat * 100;

	printf("%f",visitRate);


	return 0;
}