#include <iostream>
#include <string.h>

using namespace std;

int recursion(const char *s, int l, int r)
{
    if (l >= r)
        return (l + 1);
    else if (s[l] != s[r])
        return -(l + 1);
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s)
{
    return recursion(s, 0, strlen(s) - 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char s[1001];
    int T;
    int temp;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> s;
        temp = isPalindrome(s);
        if (temp > 0)
        {
            cout << "1 " << temp << endl;
        }
        else
        {
            cout << "0 " << -temp << endl;
        }
    }
    return 0;
}