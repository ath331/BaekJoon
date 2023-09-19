#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    if(n<3)
        cout << 4;
    for(int i=2; i<n; i++) {
        if(n<=i*i) {
            cout << (i-1)*4;
            break;
        } else if(n<=i*(i+1)) {
            cout << (i-1)*4+2; //(i-1)*2 + i*2
            break;
        }
    }
    return 0;
}