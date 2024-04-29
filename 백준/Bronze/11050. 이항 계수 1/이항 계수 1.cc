//백준11050 이항계수1
 
#include <iostream>
using namespace std;
 
int factorial(int t) {
    int ans = 1;
    for (int i = t; i > 0; i--) {
        ans *= i;
    }
    return ans;
}
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int result = factorial(n) / (factorial(k) * factorial(n - k));
 
    cout << result;
}