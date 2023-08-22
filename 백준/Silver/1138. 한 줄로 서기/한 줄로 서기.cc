//1138번: 한 줄로 서기
#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int N;
    cin >> N;
    vector<int> v(N), answer(N);
    for(int i = 0; i < N; i++)
        cin >> v[i];
    
    for(int i = 0; i < N; i++) {
        int j = 0;
        while(v[i] != 0) {  //줄을 선 순서 찾기
            if(answer[j] == 0) {
                v[i]--;
            }
            j++;
        }
        while(answer[j] != 0) j++;  //사람이 서있으면 다음으로 이동
        answer[j] = i + 1;
    }
    
    for(int i = 0; i < N; i++)
        cout << answer[i] << ' ';
 
    return 0;
}
