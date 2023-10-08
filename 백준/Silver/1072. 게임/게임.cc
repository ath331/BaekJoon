#include <iostream>

using namespace std;
#define MAX 1000000000

long long X, Y, Z;
int cnt=-1;

int main() {
    cin >> X >> Y;
    Z=(Y*100/X);
    
    if(Z>=99) {
        cout << cnt;
        return 0;
    } 

    int left=0, right= MAX;

    while(left<=right) {
        int mid=(left+right)/2;
        int temp=(Y+mid) * 100 / (X+mid);

        if(Z<temp) right=mid-1;
        else left=mid+1;
    }
    
    cout << left;
}