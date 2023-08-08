#include <iostream>
#include <stdbool.h>
using namespace std;

int main()
{
	int n, m, row, col, rowcount = 0, colcount = 0;
	bool flag;
	char arr[50][50] = {};
	cin >> n >> m;
	row = n, col = m;
	
	for (int i = 0; i < n; i++) {
		flag = true;
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'X') {
				flag = false;
				//break;			입력을 받아야되니까
			}
		}
		if (flag == false) row--;
	}
	for (int j = 0; j < m; j++) {
		flag = true;
		for (int i = 0; i < n; i++) {
			if (arr[i][j] == 'X') {
				flag = false;
				break;
			}
		}
		if (flag == false) col--;
	}
	cout << max(row, col) << endl;
}