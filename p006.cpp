#include <stdio.h>

int main() {
	long sumOfSquares = 0, squareOfSums = 0;
	for (int i = 1; i <= 100; i += 1) {
		sumOfSquares += i * i;
		squareOfSums += i;
	}
	long answer = squareOfSums * squareOfSums - sumOfSquares;
	printf("Answer: %d\n", answer);
	return 0;
}