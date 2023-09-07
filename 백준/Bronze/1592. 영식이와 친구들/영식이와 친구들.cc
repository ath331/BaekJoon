#include <iostream>

using namespace std;

int main() {
    int N, M, L;
    cin >> N >> M >> L;

    int pos[N+1] = {0, };   // 각 자리들, 알아 보기 쉽게 0은 제외
    pos[1] = 1;     // 1번 자리에 앉은 친구가 처음 공을 받는다
    int count = 0;  // 전달된 공 횟수
    int index = 1;  // 시작은 1번 자리부터
    while(pos[index] != M) {    // M번 받은 자리가 있는가
        if (pos[index] % 2 != 0) { // 홀수
            index += L;
            if(index > N)       // N만큼 이동했는데 숫자가 초과될 시
                index -= N; 
        }
        else {                      // 짝수
            index -= L;
            if(index <= 0)
                index += N;
        }
        pos[index]++;   // 다음 공을 받은 자리는 받은 횟수 1 증가
        count++;        // 전달된 공 횟수 1 증가
    }
    cout << count << endl;
}