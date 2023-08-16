#include <iostream>
#include <climits>
using namespace std;


/* 부호 https://www.acmicpc.net/problem/1247
if 문에서 overflow 발생 시 undefined behavior에 해당되 자동으로 false 처리
LONG_MAX, LONG_MIN 이용해서 overflow를 안 일으키고 검사하는 것이 포인트
https://www.acmicpc.net/board/view/56858 */


int main(void){
    long long result=0, overflow=0;
    int n;

    for (int test_case=0; test_case<3; test_case++){
        std::cin>>n;
        
        result   = 0;
        overflow = 0;

        for (int i=0; i < n; i++){
            long long tmp;
            std::cin>>tmp;

            if (result > 0 and tmp > 0 and tmp > LLONG_MAX - result) {
                //result = result + tmp - LLONG_MIN;
                overflow += 1;
            }

            if (result < 0 and tmp < 0 and tmp < LONG_MIN - result) {
                //result = result + tmp - LLONG_MAX;
                overflow -= 1;
            }

            result += tmp;
        }

        if (overflow < 0){
            std::cout<<"-\n";
        }
        else if (overflow > 0){
            std::cout<<"+\n";
        }
        else if (result==0){
            std::cout<<"0\n";
        }
        else if (result < 0){
            std::cout<<"-\n";
        }
        else if (result > 0){
            std::cout<<"+\n";
        }
    }

}