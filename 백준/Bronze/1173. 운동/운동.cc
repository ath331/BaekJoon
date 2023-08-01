#include<iostream>
#include<algorithm>
using namespace std;

int N, m, M, T, R;
int minute, pulse;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> m >> M >> T >> R;

	if (M - m < T) // 초기상태에서 운동이 불가할 경우
	{
		cout << -1;
		return 0;
	}

	pulse = m;
	while (1)
	{
		if (pulse + T <= M)
		{
			pulse += T;
			N--;
		}
		else
		{
			pulse -= R;
			if (pulse < m) pulse = m;
		}
		minute++; // 운동 또는 휴식에 소요된 시간

		if (N == 0)
		{
			cout << minute;
			return 0;
		}
	}

}