#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int I[45][45];
int abc(int yy, int xx)
{
    vector<int>v2;
    for(int y=0; y<=2; y++)
    {
        for(int x=0; x<=2; x++)
        {
            v2.push_back(I[yy+y][xx+x]);
        }
    }
 
    sort(v2.begin(),v2.end());
    return v2[4];
}
int main()
{
    int R,C,T;
    cin >> R >> C;
    
    for(int y=0; y < R; y++)
    {
        for(int x=0; x < C; x++)
        {
            cin >> I[y][x];
        }
    }
 
    cin>>T;
    int cnt=0;
 
    vector<int>v;
    for(int y=0; y < R - 2; y++)
    {
        for(int x=0; x < C - 2; x++)
        {
            int ret=abc(y,x);
            cnt+=(ret>=T);
        }
    }
 
    cout << cnt;
 
    return 0;
}
