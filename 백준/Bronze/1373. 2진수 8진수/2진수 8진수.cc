#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binary;
    cin >> binary;

    string result;
    int len = binary.length();
    int i = 0;
    if (len % 3 == 1)
    {
        cout << binary[0];
        i = 1;
    }
    else if (len % 3 == 2)
    {
        cout << ((binary[0] - '0') * 2) + (binary[1] - '0');
        i = 2;
    }

    for (; i < len; i += 3)
    {
        cout << ((binary[i] - '0') * 4) + ((binary[i + 1] - '0') * 2) + (binary[i + 2] - '0');
    }
    cout << '\n';

    return 0;
}