#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, a, b;
 
	cin >> T;
	for(int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
 
	return 0;
}