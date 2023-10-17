#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
struct candidate {
	int num = 0;
	int score[4] = {};	//score[0] :누적 점수 ,
				//index 1~3 : 각각 1,2,3점을 받은 횟수
	bool same = 0;
};
 
bool cmp(candidate& x, candidate& y) {
	if (x.score[0] == y.score[0]) {
		if (x.score[3] == y.score[3]) {
			if (x.score[2] == y.score[2]) {
				if (x.score[1] == y.score[1]) {
					x.same = 1;
					y.same = 1;
					return x.score[1] < y.score[1];
				}
				else return x.score[1] < y.score[1];
			}
			else return x.score[2] < y.score[2];
		}
		else return x.score[3] < y.score[3];
	}
	else return x.score[0] < y.score[0];
 
}
 
int main() {
 
	int n = 0;
	cin >> n;
 
	vector<candidate> c;
	for (int i = 0; i < 3; i++) {
		candidate cc;
		cc.num = i + 1;
		c.push_back(cc);
	}
 
	while (n--) {
		int vote[3];
		cin >> vote[0] >> vote[1] >> vote[2];
 
		//후보자 1
		c[0].score[0] += vote[0];
		c[0].score[vote[0]]++;
		//후보자 2
		c[1].score[0] += vote[1];
		c[1].score[vote[1]]++;
		//후보자 3
		c[2].score[0] += vote[2];
		c[2].score[vote[2]]++;
	}
 
	
	sort(c.begin(), c.end(), cmp);
 
	if (c[2].same != 1) {
		cout << c[2].num << " " << c[2].score[0];
	}
	else {
		cout << 0 <<" "<< c[2].score[0];
	}
}