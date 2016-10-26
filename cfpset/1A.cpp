#include <iostream>
using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	long long w = ((n - 1) / a) + 1;
	long long h = ((m - 1) / a) + 1;
	long long answer = w * h;
	cout << answer << endl;
	return 0;
}