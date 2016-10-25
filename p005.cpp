#include <stdio.h>
// #include "euler.h"

long long gcd(long long a, long long b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	long long g = gcd(a, b);
	return a * b / g;
}

int main() {
	long long answer = 1L;
	for (int i = 1; i <= 20; i += 1) {
		answer = lcm(answer, i);
	}
	printf("Answer: %d\n", answer);
	return 0;
}