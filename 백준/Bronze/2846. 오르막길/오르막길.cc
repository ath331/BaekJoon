#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int p[1001];
    int ans = 0;
    int l = 1, r = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n - 1; i++)
    {
        if (p[i] < p[i + 1])//오르막길
        {
            r++;
            ans = max(ans, p[r] - p[l]);
        }
        else if(p[i]>=p[i+1])//내리막길 발견
        {
            l = i+1;
            r = i+1;
        }
    }
    cout << ans << '\n';
}
