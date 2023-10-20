#include <iostream>

using namespace std;

int N;



int main()

{

	cin >> N;

	int sing = 1;

	int cnt = 0;

	while (N != 0) {

		if (N < sing)   // 남아있는 수 보다 sing이 더 커지면 sing을 다시 1로 만든다.

			sing = 1;

		N -= sing;

		sing++;

		cnt++;

	}

	cout << cnt << endl;

	return 0;

}

