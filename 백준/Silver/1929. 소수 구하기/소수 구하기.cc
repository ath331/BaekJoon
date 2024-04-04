#include <iostream>
using namespace std;

#define MAX 1000000

int arr[MAX + 1]{ 0, };

int main()
{
    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == 0)
        {
            continue;
        }
        for (int j = i * i; j <= n; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << '\n';
        }
    }
    return 0;
}