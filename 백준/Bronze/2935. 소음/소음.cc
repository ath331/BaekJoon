#include <iostream>
 
using namespace std;
 
int main() {
 
    string str, str1;
    char ch;
 
    cin>>str>>ch>>str1;
 
    int strsize = str.length();
    int str1size = str1.length();
 
    // * 일때 str, str1 수 0의개수 파악
    if(ch=='*'){
        int totalsize = strsize + str1size -2;
        cout<<'1';
        for(int i=0; i<totalsize; i++){
            cout<<0;
        }
    }
 
    else{
        // + 일때 두수의 자릿수가 같을 때
        if(strsize==str1size){
            cout<<'2';
            for(int i=0; i<strsize-1; i++){
                cout<<'0';
            }
        }
        // + 일때 두수의 자릿수가 다를 때
        else if(strsize!=str1size){
            int a=max(strsize, str1size);       // keypoint max(a,b) a,b 중 가장 큰값 출력
            int b=min(strsize, str1size);       //          min(a,b) a.b 중 가장 작은값 출력
                for(int i=a; i>0; i--){         // ex) a=4 -> 4321 
                    if(i==a||i==b){             // ex) a=4, b=2 -> 1010
                        cout<<'1';
                    }
                    else{
                        cout<<'0';
                    }
                }
            }
        }
        return 0;
}