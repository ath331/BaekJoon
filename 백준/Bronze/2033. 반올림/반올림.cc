#include<iostream>
using namespace std;

int N;
int initnum=10;
int tmp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>N;
    while(N/initnum!=0){
        if(N%initnum>=5*(initnum/10)){
                N+=initnum*1;
                tmp=(N%initnum)/(initnum/10);
                N-=(tmp*(initnum/10));
        }
        else {
            tmp=(N%initnum)/(initnum/10);
            N-=(tmp*(initnum/10));
            }
        initnum*=10;
    }
    cout<<N<<"\n";
    return 0;
}