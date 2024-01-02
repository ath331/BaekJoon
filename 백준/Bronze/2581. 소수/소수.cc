#include <iostream>
using namespace std;

int main() {
	int M, N;
	int sum = 0, min = -1;
	int cnt = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		for (int div = 1; div <= i; div++) {
			if (i%div == 0)
				cnt++;
		}
		if (cnt == 2) {		//i가 소수일 때
			if (min == -1)		//저장된 소수의 최솟값이 없을 때
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min << '\n';
}