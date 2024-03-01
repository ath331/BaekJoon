#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {

	int N;
	cin >> N;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		int min, young;
		cin >> min >> young;
		arr.push_back(min - young);
	}
	sort(arr.begin(), arr.end());
	if (N % 2 == 1) {
		cout << 1;
	}
	else {
		cout << arr[N / 2] - arr[N / 2 - 1] + 1;
	}


	return 0;
}