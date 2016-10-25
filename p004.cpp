#include <stdio.h>

bool isPalindrome(int n) {
	int original = n, reverse = 0;
	while (original) {
		reverse = 10 * reverse + original % 10;
		original /= 10;
	}
	return n == reverse;
}

int main() {
	int largest = 0, product;
	for (int a = 100; a < 1000; a += 1) {
		for (int b = 100; b < 1000; b += 1) {
			product = a * b;
			if (isPalindrome(product) && product > largest) {
				largest = product;
			}
		}
	}
	printf("Answer: %d\n", largest);
	return 0;
}