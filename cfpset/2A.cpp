#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int n; cin >> n;

	int j, l, max = 0;
	string name, winner;
	long score;
	vector<string> names;
	vector<long> scores;
	vector<pair<int, long> > events;

	for (int i = 0; i < n; i += 1) {
		cin >> name >> score;
		for (j = 0, l = names.size(); j < l; j += 1) {
			if (names[j] == name)
				break;
		}
		if (j < l) {
			scores[j] += score;
		} else {
			names.push_back(name);
			scores.push_back(score);
		}
		events.push_back(make_pair(j, score));
	}

	for (int i = 0, l = names.size(); i < l; i += 1) {
		// cout << "#" << i << "\t" << scores[i] << "\t" << names[i] << endl;
		if (scores[i] > max)
			max = scores[i];
	}

	long replay[names.size()];

	for (int i = 0, l = names.size(); i < l; i += 1) {
		replay[i] = 0;
	}

	for (int i = 0; i < n; i += 1) {
		int j = events[i].first;
		replay[j] += events[i].second;
		if (scores[j] == max && replay[j] >= max) {
			cout << names[j] << endl;
			break;
		}
	}

	return 0;
}

/*
15
aawtvezfntstrcpgbzjbf 681
zhahpvqiptvksnbjkdvmknb -74
aawtvezfntstrcpgbzjbf 661
jpdwmyke 474
aawtvezfntstrcpgbzjbf -547
aawtvezfntstrcpgbzjbf 600
zhahpvqiptvksnbjkdvmknb -11
jpdwmyke 711
bjmj 652
aawtvezfntstrcpgbzjbf -1000
aawtvezfntstrcpgbzjbf -171
bjmj -302
aawtvezfntstrcpgbzjbf 961
zhahpvqiptvksnbjkdvmknb 848
bjmj -735
*/