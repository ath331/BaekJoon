#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
 
int main(void){
    int n;
    cin >> n;
    
    //map 선언 Key 는 숫자, value는 그 숫자의 갯수.
    map<int, int> m;
    map<int, int>::iterator iter;    //반복자 선언 
    
    while(1){
 
        if((iter = m.find(n%10)) != m.end()){    //존재하면. 
            iter->second += 1;
        }else{
            m.insert(pair<int, int>(n%10, 1));
        }
        
        if(n / 10 == 0) break; 
        
        n /= 10; //1의 자리를 없앤다. 
    }
    
    int num =0;
    for(iter = m.begin(); iter != m.end(); iter++){
        if(iter->first != 6 && iter->first != 9)
            num = max(num, iter->second);
    }
    int tmp = (m.find(6)->second + m.find(9)->second + 1) / 2;
        
    cout << max(num, tmp);
    return 0;    
}
