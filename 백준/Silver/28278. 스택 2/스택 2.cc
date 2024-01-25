#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, num;
	stack<int> stack;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> m;
		switch (m) {
		case 1:
			cin >> num;
			stack.push(num);
			break;
		case 2:
			if (!stack.empty()) {
				cout << stack.top() << "\n";
				stack.pop();
			}
			else cout << "-1\n";
			break;
		case 3:
			cout << stack.size() << "\n";
			break;
		case 4:
			if (stack.empty()) cout << "1\n";
			else cout << "0\n";
			break;
		case 5:
			if (!stack.empty()) cout << stack.top() << "\n";
			else cout << "-1\n";
			break;
		}
	}
	return 0;
}