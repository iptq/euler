#include <stdio.h>

int main() {
	int largest = 0, i = 2;
	long long n = 600851475143LL;
	while (n > 1) {
		while (n % i == 0) {
			n /= i;
			if (i > largest) {
				largest = i;
			}
			i = 2;
			continue;
		}
		i += 1;
	}
	printf("Answer: %d\n", largest);
	return 0;
}