#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int prices[n];
	for (int i = 0; i < n; i += 1) {
		cin >> prices[i];
	}
	sort(prices, prices + n);
	int pos = m - 1;
	int min = prices[pos] - prices[0];
	for (pos = m; pos < n; pos += 1) {
		int diff = prices[pos] - prices[pos - m + 1];
		if (diff < min)
			min = diff;
	}
	cout << min << endl;
	return 0;
}