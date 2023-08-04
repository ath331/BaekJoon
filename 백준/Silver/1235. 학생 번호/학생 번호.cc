#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	int N;
	string input;
	vector <string> student_num;
	int length = 1;
	int result;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		// 편의를 위해 입력된 번호를 뒤집어서 저장
		reverse(input.begin(), input.end());
		student_num.push_back(input);
	}

	while (1) {
		set <string> s;  // set은 중복허용 X

		// length 만큼 번호를 잘라 set s에 삽입
		for (int i = 0; i < N; i++) {
			s.insert(student_num[i].substr(0, length));
		}

		// 1. s의 크기와 입력받은 번호의 개수(N)가 같다면, 모두 다른 값인 것
		//    -> 모든 학생 번호가 다르므로 해당 길이가 최솟값
		if (s.size() == N) {
			break;
		}

		// 2. s의 크기와 입력받은 번호의 개수(N)가 다르다면, 같은 값이 있는 것
		//    -> 모든 학생의 번호가 달라야하므로, 길이를 늘려서 다시 연산
		else {
			length++;
		}

	}

	result = length;
	cout << result;

	return 0;
}