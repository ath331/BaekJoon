#include <iostream>
#include <queue>
using namespace std;


int N;
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> myqueue;
	string comm;


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> comm;
		if (comm == "push") {
			int num;
			cin >> num;
			myqueue.push(num);
		}
		else if (comm == "pop") {
			if (myqueue.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << myqueue.front() << '\n';
				myqueue.pop();
			}
		}
		else if (comm == "size") {
			cout << myqueue.size() << '\n';
		}
		else if (comm == "empty") {
			cout << (int)myqueue.empty() << '\n';
		}
		else if (comm == "front") {
			if (myqueue.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << myqueue.front() << '\n';
			}
		}
		else if (comm == "back") {
			if (myqueue.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << myqueue.back() << '\n';
			}
		}
	}
}