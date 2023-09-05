#include<iostream>
 
using namespace std;
long long A, B, C;
long long POW(int A, int B, int C) {
    if (B == 0) return 1;
    long long temp = POW(A, B/2, C);
    temp = temp * temp % C;
    if (B % 2 == 0) return temp; //짝수 일때
    else return temp * A % C; //홀 수 일때
 
}
 
 
int main(void) {
    cin >> A >> B >> C;
    cout << POW(A, B, C);
    return 0;
}