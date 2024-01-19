#include <iostream>
 
using namespace std;
/*
    C언어의 경우 cin은 scanf로, cout은 printf로 바꾸어 코드를 작성하면 된다.
*/
int main() {
 
    int a1, a0;
    cin >> a1 >> a0;
 
    int c;
    cin >> c;
 
    int n0;
    cin >> n0;
 
    if (a1 * n0 + a0 <= c * n0 && a1 <= c)
        cout << 1 << endl;
    else
        cout << 0 << endl;
 
    return 0;
}
