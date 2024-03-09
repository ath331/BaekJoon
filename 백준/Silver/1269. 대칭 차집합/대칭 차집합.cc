#include <iostream>
#include <map>
using namespace std;
map<int, bool> m;
int N,M;
int num;
int main(void)
{
	cin >> N >> M;
	for (int i = 0; i < N+M; i++)
	{
		cin >> num;
		if (m[num] == true) // 이미 존재하면 map에서 제거를 한다.
			m.erase(num);
		else // 존재 안하면 추가를 해준다.
			m[num] = true;
	}
	cout << m.size(); // 남은 map 사이즈를 출력

}