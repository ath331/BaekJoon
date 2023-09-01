#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(long long a, long long b){
    return a > b;
} // 내림차순 cmp 구현
 
int main(){
    long long tips[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> tips[i];
    }
    sort(tips, tips + n, cmp); // 오름차순으로 정렬 greater<long long>() 사용해도 무방
    long long sum = 0;
    for (int i = 0; i < n;i++){
        if(tips[i] - i > 0){ // 팁 - 등수가 양수
            sum += tips[i] - i; //합계에 더해줌
        }
    }
    cout << sum;
    return 0;
}
