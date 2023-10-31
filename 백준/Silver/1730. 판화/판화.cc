#include <iostream>
#include <string>

using namespace std;

int n;
string m;
bool p[100][100]; // 수직으로 지나간 위치인지
bool h[100][100]; // 수평으로 지나간 위치인지
int row, col; // 처음 위치

// 범위 안에 있는 위치인지 판별
bool isValidLocation(const int& row, const int& col) {
	if (row < 0 || row >= n || col < 0 || col >= n) 
		return false;
	
	return true;
}

int main() {
	cin >> n;
	cin >> m;

	// 각각에 경우에 대해 지나간 위치는 배열 p와 배열 h에 true 대입 
	for (int i = 0; i < m.size(); i++) {
		if (m[i] == 'U') {
			if (!isValidLocation(row - 1, col)) continue;

			p[row][col] = true;
			p[--row][col] = true;
		}
		else if (m[i] == 'D') {
			if (!isValidLocation(row + 1, col)) continue;

			p[row][col] = true;
			p[++row][col] = true;
		}
		else if (m[i] == 'L') {
			if (!isValidLocation(row, col - 1)) continue;

			h[row][col] = true;
			h[row][--col] = true;
		}
		else {
			if (!isValidLocation(row, col + 1)) continue;

			h[row][col] = true;
			h[row][++col] = true;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[i][j] && h[i][j]) printf("+");
			else if (p[i][j]) printf("|");
			else if (h[i][j]) printf("-");
			else printf(".");
		}

		printf("\n");
	}

	return 0;
}