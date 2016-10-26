#include <iostream>
using namespace std;

int main() {
	long x, y; cin >> x >> y;
	long n; cin >> n;

	long values[6] = {
		x - y,
		x,
		y,
		y - x,
		-x,
		-y
	};

	long answer = (values[n % 6]) % 1000000007;
	while (answer < 0) {
		answer += 1000000007;
	}
	cout << answer << endl;
	return 0;
}