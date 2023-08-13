#include<iostream>
using namespace std;
int main(void) {
	int answer = 0;
	char pan[8][9];	//8*8이어도 char는 마지막에 공백문자열이 있기때문에 9로 선언
	//입력
	for (int i = 0; i < 8; i++)
		cin >> pan[i];

	//탐색 (하얀칸에 F가 몇개있는지)
	for (int i = 0; i < 8; i++) {
		for (int j = i % 2; j < 8; j += 2) {
			if (pan[i][j] == 'F')
				answer++;
		}
	}
	//출력
	cout << answer << endl;
}