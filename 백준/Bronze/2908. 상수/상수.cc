#include <string>
#include <iostream>

using namespace std;

int main(void) {
	string x, y;
	cin >> x >> y;

	string bigger;

	for (int i = 2; i >= 0; i--) {
		if (x[i] > y[i]) {
			bigger = x; break;
		}
		else if (x[i] < y[i]) {
			bigger = y; break;
		}
	}

	cout << bigger[2] << bigger[1] << bigger[0];
	return 0;
}