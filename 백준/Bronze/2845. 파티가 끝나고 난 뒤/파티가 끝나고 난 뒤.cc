#include <iostream>
using namespace std;
int main() {
    int n, p,newspaper;
    cin >> n >> p;
    for (int i = 0; i < 5; i++)
    {
        cin >> newspaper;
        cout << newspaper - n*p << ' ';
    }
}