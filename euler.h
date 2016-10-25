#ifndef EULER_LIB
#define EULER_LIB

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

int lcm(int a, int b) {
	int g = gcd(a, b);
	return a * b / g;
}

#endif