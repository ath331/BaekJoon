#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int count = 0;
    bool space = false;
    if(str.empty())
    {
        cout << "0";
        return 0;
    }
    count = 1;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
            count++;
    }
    if(str[0] == ' ')
        count--;
    if(str[str.length()-1] == ' ')
        count--;

    cout << count;
    return 0;
}