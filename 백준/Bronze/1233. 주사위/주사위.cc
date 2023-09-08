#include <iostream>
using namespace std;
int main(void)
{
	int s1, s2, s3, arr[81] = { 0, };
	cin >> s1 >> s2 >> s3;

	for (int i = 1; i <= s1; i++)
		for (int j = 1; j <= s2; j++)
			for (int k = 1; k <= s3; k++)
				arr[i + j + k]++;

	int max = 0, ans = 0;
	for (int i = 1; i <= 80; i++)
		if (arr[i] > max)
			max = arr[i], ans = i;

	cout << ans;
}