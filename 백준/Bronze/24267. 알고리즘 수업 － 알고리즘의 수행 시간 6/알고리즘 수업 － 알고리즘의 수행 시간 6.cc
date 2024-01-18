#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
24267_알고리즘 수업 - 알고리즘의 수행 시간 6
1112KB	0ms
*/
#include <cstdio>

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	long long int n;
	scanf("%lld", &n);
	
	printf("%lld\n3\n", (n - 2) * (n - 1) * n / 6);
	return 0;
}