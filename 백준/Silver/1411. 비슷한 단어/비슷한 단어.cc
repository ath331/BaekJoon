//1411 비슷한 단어
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool similar(string s1, string s2) {
	unordered_map<char, char> um;
	unordered_map<char, bool> valid; //알파벳이 사용되었는지 확인
	for (int i = 0; i < s1.size(); i++) {
		if (!um[s1[i]]&& !valid[s2[i]]) {
			um[s1[i]] = s2[i]; //i번째 알파벳 변경
			valid[s2[i]] = true; //사용
		}
		else {
			if (um[s1[i]] != s2[i]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<string> v;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	int answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (similar(v[i], v[j]) == true) {
				answer++;
			}
		}
	}

	cout << answer << "\n";

	return 0;
}