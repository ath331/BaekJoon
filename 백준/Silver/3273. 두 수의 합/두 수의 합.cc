#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    int a[1000000];
    bool occur[2000000] = {};
    cin >> n;
    for(int i=0; i<n; i++)  cin >> a[i];
    cin >> x;

    int cnt=0;
    for(int i=0; i<n; i++) {
        if(x-a[i]>0 && occur[x-a[i]]) { // x-a[i]가 유효한 원소인지 검사
            cnt++;
        }
        occur[a[i]] = true;
    }
    cout << cnt;
}