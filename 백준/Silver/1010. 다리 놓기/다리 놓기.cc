#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tcase, n, r, temp;
    int answer;

    cin >> tcase;
    while(tcase--) {
        answer = 1;
        temp = 1;
        cin >> r >> n;
        for(int i = n; i > n - r; i--) {
            answer *= i;
            answer /= temp++;
        }
        cout << answer << endl;
    }
}