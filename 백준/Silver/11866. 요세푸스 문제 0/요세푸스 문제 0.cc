#include<iostream>
#include<queue>
using namespace std;

int N, K;
queue<int> q;

int main()
{
	cin >> N >> K;
	for (int i = 1; i <= N; i++) q.push(i);

	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < K; i++)
		{
			q.push(q.front()); // i번째 카드를 맨뒤로
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) cout << ", ";
		q.pop();
	}
	cout << ">";

}