#include <iostream>
using namespace std;

int main() {
	int n; cin >> n;
	int prev, curr;
	int a = 0, b = 0;
	for (int i = 0; i < n; i += 1) {
		cin >> curr;
		if (i == 0) {
			a = 1;
			b = 1;
		} else {
			if (curr >= prev) {
				b += 1;
				if (b > a)
					a = b;
			} else {
				b = 1;
			}
		}
		prev = curr;
	}
	cout << a << endl;
	return 0;
}