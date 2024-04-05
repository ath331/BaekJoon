#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, rt, cnt = 0;

	while (1) {
		cin >> n;
		if (!n)	//0 입력시 종료
			break;

		for (int i = n + 1; i <= 2 * n; i++) {
			rt = sqrt(i);
			if (rt == 1 && i != 1) {	//2,3인 경우
				cnt++;
				continue;
			}
			if (i % 2) {	//홀수일 경우
				for (int j = 2; j <= rt; j++) {
					if (!(i%j))
						break;
					if (j == rt) {
						cnt++;
					}
				}
			}
		}
		cout << cnt << '\n';
		cnt = 0;
	}
}