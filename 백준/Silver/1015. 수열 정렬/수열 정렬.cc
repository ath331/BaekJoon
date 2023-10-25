#include <iostream>
#include <vector>
#include <algorithm>

void solve(void);

int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	solve();
}

void solve(void)
{
	int size;
	std::cin >> size;

	std::vector<std::pair<int, int>> val_index;
	for (int i = 0; i < size; i++)
	{
		int a_val;
		std::cin >> a_val;
		val_index.push_back(std::make_pair(a_val, i));
	}

	std::sort(val_index.begin(), val_index.end());

	std::vector<int> p(size);
	for (int i = 0; i < size; i++)
		p[val_index[i].second] = i;

	for (auto a : p)
		std::cout << a << ' ';
}