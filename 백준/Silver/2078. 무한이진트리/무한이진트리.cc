#include <iostream>
#include <vector>
using namespace std;

pair<int, int> func(int A, int B) {
	if (A == 0) return make_pair(-1, 0);
	if (B == 0) return make_pair(0, -1);

	if (A > B) {
		auto p = func(A % B, B);
		return make_pair(p.first + A / B, p.second);
	}
	else {
		auto p = func(A, B % A);
		return make_pair(p.first, p.second + B / A);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, B; cin >> A >> B;
	auto p = func(A, B);
	cout << p.first << ' ' << p.second;
}