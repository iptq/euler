#include <stdio.h>

int main() {
	int a = 0, b = 1, c, sum;
	while (b < 4000000) {
		c = a + b;
		if (c % 2 == 0) {
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("Answer: %d\n", sum);
	return 0;
}