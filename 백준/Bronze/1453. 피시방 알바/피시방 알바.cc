#include <iostream>
using namespace std;
int main() {
    int cnt = 0, guest, a[101] = { 0 }, num;
    cin >> guest;
    for (int i = 0; i < guest; i++)
    {
        cin >> num;
        if (a[num] > 0)cnt++;
        a[num]++;
    }
    cout << cnt << '\n';
}