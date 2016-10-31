#include <iostream>
using namespace std;

int main() {
	long long a, b, c;
	int d = 0;
	cin >> a;
	b = a;

	while (!d) {
		b += 1;
		c = b;
		if (c < 0) c *= -1;
		while (c) {
			if (c % 10 == 8) {
				d = 1;
				break;
			}
			c /= 10;
		}
	}
	cout << b - a << endl;
	return 0;
}