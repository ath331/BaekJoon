#include<iostream>
#define endl "\n"
using namespace std;

bool map[101][101];

void Answer()
{
	int A, B, C, D;
	for (int t = 0; t < 4; t++)
	{
		cin >> A >> B >> C >> D;
		for (int i = A; i < C; i++)
		{
			for (int j = B; j < D; j++)
			{
				map[i][j] = true;
			}
		}
	}
	int result = 0;
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			if (map[i][j])
			{
				result++;
			}
		}
	}
	cout << result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();
	return 0;
}