#include <iostream>
#include <algorithm>
using namespace std;

int N, K;
int arr[1000];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	for (int i = 0; i < N; i++) cin >> arr[i];

	sort(arr, arr + N);

	cout << arr[N - K];
}