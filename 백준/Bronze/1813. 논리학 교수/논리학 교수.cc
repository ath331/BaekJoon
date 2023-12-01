#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    // 참이 n개라는 말이 각각 몇개인지 센다.
    int ct[51]; fill(ct, ct + 51, 0);
    for (int i = 0, n; i < N; i++)
        cin >> n, ct[n]++;

    // 참이 n개다 라는 말이 n개와 같다면 이는 참이 된다.
    for (int i = 50; i >= 0; i--)
        if (ct[i] == i){
            cout << i;
            return 0;
        }

    // 참인 말을 찾지 못했다면 -1 출력
    cout << -1;
}