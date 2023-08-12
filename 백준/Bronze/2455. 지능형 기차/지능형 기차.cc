#include <iostream>
using namespace std;

int main() {
	int num1, num2, total = 0, max = 0;

	for (int i = 0; i < 4; i++) {
		cin >> num1 >> num2;
		total += num2 - num1;
		if (total > max) {
			max = total;
		}
	}
	cout << max;

	return 0;
}