#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
/*
15439_베라의 패션
1112KB	0ms
*/
#include <cstdio>

int N;

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif // _WIN32
	scanf("%d", &N);
	printf("%d\n", N * (N - 1));
	return 0;
}