#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n, k;
	cin >> n >> k;

	if (k >= n) {
		cout << 0;
	}
	else {
		int answer = 0;

		while (1) {
			int cnt = 0;
			int temp = n;
			while (temp > 0) {
				if (temp % 2 == 0) {
					temp /= 2;
				}
				else {
					temp /= 2;
					cnt++;
				}

			}
			//cnt가 k보다 작거나 같아지면 종료
			if (k >= cnt) {
				break;
			}

			n++;
			answer++;
		}
		cout << answer;
	}
	
	return 0;
}