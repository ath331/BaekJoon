#include<bits/stdc++.h>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;

struct p {
	long double x, y;
	p operator + (const p& i) const {
		return { x + i.x, y + i.y };
	}
	p operator - (const p& i) const {
		return { x - i.x, y - i.y };
	}
	bool operator == (const p& i) const {
		return x == i.x && y == i.y;
	}
	bool operator < (const p& i) const {
		return x < i.x || x == i.x && y < i.y;
	}
};

istream& operator >> (istream& in, p& i) {
	in >> i.x >> i.y;
	return in;
}

int main() {
	fastio;
	p a, b, c, d;
	while (cin >> a >> b >> c >> d) {
		p res;
		if (a == c) res = d + b - a;
		if (a == d) res = c + b - a;
		if (b == c) res = d + a - b;
		if (b == d) res = c + a - b;
		cout << fixed << setprecision(3) << res.x << ' ' << res.y << '\n';
	}
}