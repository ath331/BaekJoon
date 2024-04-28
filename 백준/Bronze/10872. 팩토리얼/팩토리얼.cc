#include <iostream>
using namespace std;
 
int main() {
	int N; // 정수 N
	cin >> N;
 
	int facN = 1; // N팩토리얼 값
 
	for (int i = 1; i <= N; i++)
	{
		facN *= i;
	}
 
	cout << facN << '\n';
	return 0;
}