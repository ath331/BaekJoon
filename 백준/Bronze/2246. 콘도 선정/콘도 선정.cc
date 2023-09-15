#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (auto& x : v) cin >> x.first >> x.second;

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		bool check = true;
		bool check2 = true;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (v[i].first > v[j].first) {
				if (v[i].second >= v[j].second) {
					check = false;
					break;
				}
			}
			else if (v[i].second > v[j].second) {
				if (v[i].first >= v[j].first) {
					check2 = false;
					break;
				}
			}
		}
		if (check && check2) cnt++;
	}
	cout << cnt;
}