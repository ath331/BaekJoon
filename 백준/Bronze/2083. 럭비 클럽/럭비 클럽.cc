#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string name;
int age, weight;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true) {
		cin >> name >> age >> weight;
		if (name == "#" && age == 0 && weight == 0) break;
		if (age > 17 || weight >= 80) cout << name << " Senior" << '\n';
		else cout << name << " Junior" << '\n';
	}
}