#include <iostream>
using namespace std;
int main() {
    int a, b, total = 0, big = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a >> b;
        total += -a + b;
        if (total > big)
            big = total;
    }
    cout << big;

}