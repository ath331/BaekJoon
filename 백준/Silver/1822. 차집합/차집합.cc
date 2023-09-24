#include <iostream>
#include <set>

using namespace std;

set<int> s;
set<int>::iterator check;
set<int>::iterator t;

int main(void) {
	int A, B;
	int setA;
	int setB;
	cin >> A >> B;

	for (int i = 0; i < A; i++) {
		cin >> setA;
		s.insert(setA);
	}

	for (int i = 0; i < B; i++)	{
		cin >> setB;

		// B의 원소가 A에 있는지 확인
		check = s.find(setB);

		// 끝까지 없으면 다음 원소 입력받아 확인
		if (check == s.end()) {
			continue;
		}
		// 있으면 해당 원소 A에서 지워주기
		else {
			s.erase(check);
		}
	}

	cout << s.size() << "\n";
	
	// A-B 출력
	for (t = s.begin(); t != s.end(); t++) {
		cout << *t << " ";
	}

	cout << "\n";

	return 0;
}