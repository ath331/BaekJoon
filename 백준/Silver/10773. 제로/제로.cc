#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int K;
	int num;
	int stack_size;
	int sum = 0;
	
	cin >> K;	// 입력받을 정수의 개수

	for (int i = 0; i < K; i++) {
		cin >> num;	// 숫자를 입력받아,
		if (num == 0) {	// 0이면 
			s.pop();	// top(0 이전)에 있는 숫자를 pop
		}
		else
			s.push(num); // 0이 아니면 stack에 push
	}

	stack_size = s.size();
	for (int i = 0; i < stack_size; i++) {
		sum += s.top();	// top에 있는 숫자를 하나씩 꺼내가며 더하기
		s.pop();
	}

	cout << sum;

	return 0;
}