#include <iostream>
using namespace std;

int main() {
	int N;
	int result = 0;
	cin >> N;

	for (int i = 1; i < N; i++) {
		int sum = 0;
		int num = i;
		while (num!= 0) { //자릿수마다 더하기
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == N) { //조건
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}