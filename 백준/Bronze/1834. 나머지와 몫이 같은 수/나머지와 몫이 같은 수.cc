#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    long long num;
    long long result = 0;
    cin >> num;
    // num+1의 배수를 num-1회 누적
    for (long long i = 1; i < num; i++)
        result += (num + 1) * i;
 
    cout << result;
 
    return 0;
}