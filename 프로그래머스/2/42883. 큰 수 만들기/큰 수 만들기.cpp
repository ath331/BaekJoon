#include <string>
using namespace std;

string solution(string number, int k) {
    string st;
    st.reserve(number.size());  // 성능 향상을 위해 미리 공간 확보

    // 1) 그리디 제거 스텝
    for (char c : number) {
        while (k > 0 && !st.empty() && st.back() < c) {
            st.pop_back();
            --k;
        }
        st.push_back(c);
    }

    // 2) 남은 k만큼 뒤에서 제거
    if (k > 0) {
        st.resize(st.size() - k);
    }

    return st;
}