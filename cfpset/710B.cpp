#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	int points[n];
	for (int i = 0; i < n; i += 1) {
		cin >> points[i];
	}

	sort(points, points + n);

	if (n % 2 == 1) {
		cout << points[n / 2] << endl;
	} else {
		cout << points[n / 2 - 1] << endl;
	}
	return 0;
}