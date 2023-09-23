#include <bits/stdc++.h>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void)
{
    fast_io();
    int num = 1;
    while (num)
    {
        vector<string> v;
        int arr[222] = {
            0,
        };
        int n;
        cin >> n;
        if (n == 0)
            break;
        cin.ignore();
        for (int i = 0; i < n; i++)
        {
            string str;
            getline(cin, str);
            v.push_back(str);
        }
        for (int i = 0; i < n * 2 - 1; i++)
        {
            int a;
            char c;
            cin >> a >> c;
            arr[a - 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 2)
                cout << num++ << " " << v[i] << "\n";
        }
    }
}