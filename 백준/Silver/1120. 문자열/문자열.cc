#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);

	string a, b;
	cin >> a >> b;
	
	int min_diff = INT_MAX;
	for (int i = 0; i < b.size() - a.size() + 1; ++i) {
		int cnt = 0;

		for (int j = 0; j < a.size(); ++j)
			if (a[j] != b[j + i])
				++cnt;

		min_diff = min(min_diff, cnt);
	}

	cout << min_diff << '\n';
	
	return 0;
}