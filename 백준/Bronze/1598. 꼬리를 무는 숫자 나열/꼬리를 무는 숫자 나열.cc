#include <iostream>
#include <math.h>
using namespace std;
int main(void)
{
	int x, y, xw, yw, xh, yh;
	cin >> x >> y;

	xw = (x - 1) / 4;
	yw = (y - 1) / 4;

	xh = (x-1) % 4;
	yh = (y-1) % 4;

	cout << abs(xw - yw) + abs(xh - yh);
}