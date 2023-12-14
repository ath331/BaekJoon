#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]){
	ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);
    
    int A, B, M;
    int arr[3]={1, 2, 3};
    
    cin >> M;
    for(int i=0; i<M; i++){
        cin >> A >> B;
        swap(arr[A-1], arr[B-1]);
    }

    for(int i=0; i<3; i++){
        if(arr[i]==1) cout<<i+1;
    }    

}