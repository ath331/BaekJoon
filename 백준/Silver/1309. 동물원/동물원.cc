// 동물원
// 다이나믹 프로그래밍
#include <iostream>
int D[100001]={1,3};
int main(){
    int N;
    std::cin>>N;
    for(int i=2;i<=N;i++)
        D[i]=(D[i-1]*2+D[i-2])%9901;
    std::cout<<D[N];
}
