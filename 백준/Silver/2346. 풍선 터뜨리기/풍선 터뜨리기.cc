#include <iostream>
#include <deque>
using namespace std;
deque<pair<int,int>> dq;
int N;
int main(void)
{
	cin >> N;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		dq.push_back(make_pair(num,i+1)); // 덱에 이동해야할 수와 몇번째였는지 저장
	}
	while (!dq.empty())
	{
		int cur = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) //덱이 비었는데 덱 연산을하면 에러 나므로 break 해주기
			break;

		if (cur > 0)
		{ // 양수이면 이미 출력후 pop을 한번 했기에 cur-1번만 front를 back으로 옮기기
			for (int i = 0; i < cur-1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = 0; i < (-1)*cur; i++)
			{ // 음수일 경우 왼쪽 이동이므로 맨뒤의것을 맨앞으로 옮기기
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}


}