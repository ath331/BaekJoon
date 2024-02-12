#include <iostream>
using namespace std;
 
int gcd(int x, int y){
    int z = 1;
    while(y != 0){
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}
 
int main(int argc, const char * argv[]) {
    int a, b, c, d;//입력
    int e, f;//출력
    
    cin >> a >> b >> c >> d;
    
    e = a * d + c * b;
    f = b * d;
    
    int min = gcd(e, f);
    e /= min;
    f /= min;
    cout << e << ' ' << f << '\n';;
    return 0;
}
 
