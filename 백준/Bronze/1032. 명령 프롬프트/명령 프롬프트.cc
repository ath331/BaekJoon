#include<iostream>
#include<string>
using namespace std;
 
int main() {
    
    // https://www.acmicpc.net/problem/1032
    
    int n;
    
    scanf("%d", &n);
    
    string str[50];
    
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    
    char c;
    
    for(int i=0; i<str[0].length(); i++){
        c = str[0][i];
        for(int j=0; j<n; j++){
            if(c != str[j][i]){
                c = '?';
                break;
            }
        }    
        cout << c;    
    }
    
}